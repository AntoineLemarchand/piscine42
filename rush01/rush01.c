/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:53:06 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/24 08:48:33 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**solve(int **tab, int row, int col, int value)
{
	int i;
	int size;

	i = 0;
	size = tab[0][0];
	if (col == size)
	{
		col = 1;
		row++;
	}
	while (value <= size)
	{
		tab[row][col] = value;
		if (ft_is_valid(row, col, tab))
		{
			if (solve(row, col++, tab, value + 1))
				return (1);
		}
	}

}
