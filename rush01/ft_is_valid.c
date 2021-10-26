/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:32:09 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/24 15:08:45 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_left(int x, int **matrix)
{
	if (matrix[0][x] == 4)
	{
		if (matrix[1][x] != 1 || matrix[2][x] != 2 
			|| matrix[3][x] != 3 || matrix[4][x] != 4)
			return (0);
	}
	else if (matrix[0][x] == 1)
	{
		if (matrix[1][x] != 4)
			return (0);
	}
	return (1);
}

int	ft_check_right(int x, int **matrix)
{
	int end;

	end = matrix[0][0] + 1;
	if (matrix[end][x] == 4)
	{
		if (matrix[end - 1][x] != 1 || matrix[end - 2][x] != 2 
			|| matrix[end - 3][x] != 3 || matrix[end - 4][x] != 4)
			return (0);
	}
	else if (matrix[0][x] == 1)
	{
		if (matrix[1][x] != 4)
			return (0);
	}
	return (1);
}

int	ft_check_top(int y, int **matrix)
{
	if (matrix[y][0] == 4)
	{
		if (matrix[y][1] != 1 || matrix[y][2] != 2 
			|| matrix[y][3] != 3 || matrix[y][4] != 4)
			return (0);
	}
	else if (matrix[y][0] == 1)
	{
		if (matrix[y][1] != 4)
			return (0);
	}
	return (1);
}

int	ft_check_bot(int y, int **matrix)
{
	int end;

	end = matrix[0][0] + 1;
	if (matrix[y][end] == 4)
	{
		if (matrix[y][end - 1] != 1 || matrix[y][end - 2] != 2 
			|| matrix[y][end - 3] != 3 || matrix[y][end - 4] != 4)
			return (0);
	}
	else if (matrix[y][0] == 1)
	{
		if (matrix[y][0] != 4)
			return (0);
	}
	return (1);
}

int	ft_is_valid(int y, int x, int **matrix)
{
	int i;
	int j;

	i = 1;
	j = 2;
	while (i <= matrix[0][0])
	{
		while (j <= matrix[0][0])
		{
			if (matrix[0][i] == matrix[0][j] && matrix[0][i] != 0)
				return (0);
			j++;
		}
		i++;
	}
	while (i <= matrix[0][0])
	{
		while (j <= matrix[0][0])
		{
			if (matrix[i][0] == matrix[j][0] && matrix[0][i] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (ft_check_left(x,matrix) && ft_check_right(x,matrix)
		&& ft_check_top(y,matrix) && ft_check_bot(y,matrix));
}
