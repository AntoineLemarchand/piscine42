/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:43:07 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/20 08:50:39 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_is_neg(char *str)
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
	return (sign % 2);
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
		j = i + 1;
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

int	ft_change_base(char *str, char *base)
{
	int	base_len;
	int	i;
	int out;

	base_len = ft_strlen(base);
	out = 0;
	i = 0;
	while (i < base_len - 1)
	{
		base[i] = (i + 48);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		out = out * 10 + 
	}
}

int	ft_atoi_base(char *str, char *base)
{
	if (ft_is_valid(base))
	{
		int i;

		i = 0;
		out = out * ft_strlen(base) + 
	}
	return (0);
}
