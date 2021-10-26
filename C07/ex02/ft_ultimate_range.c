/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:10:09 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/23 18:55:31 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_absolute(int nb)
{
	if (nb < 0)
		return (-nb);
	return(nb);
}

int ft_arrlen(int **arr)
{
	int i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;

	i = 0;
	if (max < min)
		return (-1);
	if (max < 0)
		diff = ft_absolute(min) - ft_absolute(max);
	else
		diff = ft_absolute(max) - ft_absolute(min);
	if(!(range = malloc(diff * 4)))
		return (-1);
	while (min < max)
	{
		range[0][i] = range[0][min];
		i++;
		min++;
	}
	return (ft_arrlen(range));
}
