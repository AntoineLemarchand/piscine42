/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:19:59 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/23 19:05:12 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_tab(int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < tab[0][0])
	{
		while (j < tab[0][0])
		{
			ft_putchar(tab[i + 1][j + 1] + 48);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
