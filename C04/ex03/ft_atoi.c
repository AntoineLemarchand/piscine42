/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:39:52 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/19 10:59:28 by alemarch         ###   ########.fr       */
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
			sign++;
		i++;
	}
	return (sign % 2);
}

int	ft_atoi(char *str)
{
	int				i;
	unsigned int	out;

	i = 0;
	out = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (out * 10) + (str[i] - 48);
		i++;
	}
	if (ft_is_negative(str))
		out *= -1;
	return (out);
}
