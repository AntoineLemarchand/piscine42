/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:43:07 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/17 13:58:51 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_negative(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i] > '9' || str[i] < '0')
	{
		if (str[i] == '-')
		{
			sign++;
		}
		i++;
	}
	return (i % 2);
}

int	ft_is_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (!str[i])
		return (0);
	if (str[0] == '1' && !str[1])
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int ft_atoi_base(char *str, char *base)
{
	int				i;
	unsigned int	out;

	i = 0;
	out = 0;
	if (ft_is_valid(base))
	{
		while (str[i] < '0' || str[i] > '9')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			out = ((out * 10) + (str[i] - 48);
			i++;
		}
		if (ft_is_negative(str))
			out *= -1;
	}
	return (out);
}
