/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:21:46 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/16 14:21:47 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_hbar(int x, char left, char right)
{
	int	i;

	i = 0;
	if (x > 0)
		ft_putchar(left);
	if (x > 2)
	{
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x > 1)
		ft_putchar(right);
	if (x > 0)
		ft_putchar('\n');
}

void	ft_put_vbars(int x)
{
	int	i;

	i = 0;
	if (x > 0)
		ft_putchar('B');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('B');
	if (x > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y > 0)
		ft_put_hbar(x, 'A', 'C');
	while (i < y - 2)
	{
		ft_put_vbars(x);
		i++;
	}
	if (y > 1)
		ft_put_hbar(x, 'A', 'C');
}
