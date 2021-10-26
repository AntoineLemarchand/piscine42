/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:37:11 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/24 21:45:22 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

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

int	ft_is_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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



char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (ft_is_valid(base_from) && ft_is_valid(base_to))
	{
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			out = (out * 10) + (str[i] - 48);
		}
	}
	else
		return (NULL);
}
