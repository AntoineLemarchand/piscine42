/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:45:40 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/21 12:25:43 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i]))
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort_arg(char *argv[], int argc)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	**argv_sorted;

	i = 0;
	argv_sorted = ft_sort_arg(argv, argc);
	while (i < argc - 1)
	{
		i++;
		ft_putstr(argv_sorted[i]);
		ft_putchar('\n');
	}
	return (0);
}
