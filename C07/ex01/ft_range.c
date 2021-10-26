/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:23:30 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/25 12:54:48 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_absolute(int nb)
{
	if (nb < 0)
		return (-nb);
	return(nb);
}

int	*ft_range(int min, int max)
{
	int *arr;
	int i;
	int diff;

	i = 0;
	if (max < 0)
		diff = ft_absolute(min) - ft_absolute(max);
	else
		diff = ft_absolute(max) - ft_absolute(min);
	if (min < max && (arr = malloc(diff * 4 + 1)))
	{
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		return (arr);
	}
	return (NULL);
}
