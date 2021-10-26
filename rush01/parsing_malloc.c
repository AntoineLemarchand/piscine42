/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:42:00 by mriaud            #+#    #+#             */
/*   Updated: 2021/10/24 09:12:23 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_get_tab(int dimension)
{
	int	*tab;
	int	i;

	i = 0;
	while (i < dimension)
	{
		tab = malloc(sizeof(*tab) * dimension);
		i++;
	}
	return (tab);
}

int	**ft_get_matrix(int dimension)
{
	int	**matrix;
	int	i;

	i = 0;
	matrix = malloc(sizeof(*matrix) * dimension);
	while (i < dimension)
	{
		matrix[i] = ft_get_tab(dimension);
		i++;
	}
	return (matrix);
}
