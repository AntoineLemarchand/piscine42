/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:55:37 by mriaud            #+#    #+#             */
/*   Updated: 2021/10/24 15:20:42 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	**ft_parse_and_check(char *str);
int	ft_solve(int y, int x, int **matrix);

void	ft_putnb(int nb)
{
	nb += 48;
	write(1, &nb, 1);
}

int	ft_put_matrix(int **matrix)
{
	int	x;
	int	y;

	y = 0;
	while (y < matrix[0][0])
	{
		x = 0;
		while (x < matrix[0][0])
		{
			ft_putnb(matrix[y + 1][x + 1]);
			if (x != matrix[0][0] - 1)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (0);
}

int	ft_put_error()
{
	write(1, "Error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	int	**matrix;

	if (argc == 2 && argv[1] != 0)
	{
		matrix = ft_parse_and_check(argv[1]);
		if (matrix == 0)
			return (ft_put_error());
		if(!ft_solve(1, 1, matrix))
			return (ft_put_error());
		return (ft_put_matrix(matrix));
	}
	return (ft_put_error());
}
