/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:15:07 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/14 11:03:13 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	nbr;
	char	nbr2;

	nbr = 0;
	nbr2 = 1;
	while (nbr < 99)
	{
		ft_putchar(nbr / 10 + 48);
		ft_putchar(nbr % 10 + 48);
		ft_putchar(' ');
		ft_putchar(nbr2 / 10 + 48);
		ft_putchar(nbr2 % 10 + 48);
		if (!(nbr == 98 && nbr2 == 99))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		nbr2++;
		if (nbr2 > 99)
		{
			nbr++;
			nbr2 = nbr + 1;
		}
	}
}
