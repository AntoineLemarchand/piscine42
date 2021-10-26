/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:11:37 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/15 12:55:38 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swap = tab[j];
		tab[j] = tab[i];
		tab[i] = swap;
		i++;
		j--;
	}
}

#include <stdio.h>
void main ()
{
	int a[6] = {1,2,3,4,5,6};
	ft_rev_int_tab(a, 6);
	printf("%d %d %d %d %d %d ", a[0], a[1], a[2], a[3], a[4], a[5]);
}
