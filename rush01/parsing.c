/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriaud <mriaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:41:45 by mriaud            #+#    #+#             */
/*   Updated: 2021/10/23 19:55:53 by mriaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_get_tab(int dimension);
int	**ft_get_matrix(int dimension);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i != nb && i < nb)
		i++;
	if (i == nb)
		return (0);
	else
		return (i);
}

void	init_matrix(int **matrix, int size, char *str)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	matrix[0][0] = size;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (word_count / size == 0)
				matrix[0][word_count % size + 1] = str[i] - 48;
			else if (word_count / size == 1)
				matrix[size + 1][word_count % size + 1] = str[i] - 48;
			else if (word_count / size == 2)
				matrix[word_count % size + 1][0] = str[i] - 48;
			else if (word_count / size == 3)
				matrix[word_count % size + 1][size + 1] = str[i] - 48;
			word_count++;
		}
		i++;
	}
}

int	ft_params_counter(char *str)
{
	int	i;
	int	last_is_space;
	int	params_count;

	i = -1;
	last_is_space = 1;
	params_count = 0;
	while (str[++i])
	{
		if (!(str[i] == 32 || (str[i] >= '1' && str[i] <= '9')))
			return (-1);
		if (str[i] == 32)
			last_is_space = 1;
		else if (str[i] >= '1' && str[i] <= '9')
		{
			if (last_is_space == 1)
			{
				params_count++;
			}
			else
				return (-1);
			last_is_space = 0;
		}
	}
	return (params_count);
}

int	**ft_parse_and_check(char *str)
{
	int	**matrix;
	int	size;
	int	params_count;

	if (str == 0)
		return (0);
	params_count = ft_params_counter(str);
	if (params_count < 4)
		return (0);
	if (ft_sqrt(params_count) == 0)
		return (0);
	size = ft_sqrt(params_count);
	if (size > 9)
		return (0);
	matrix = ft_get_matrix(size + 2);
	init_matrix(matrix, size, str);
	return (matrix);
}
