/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:41:28 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/25 10:35:07 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include<stdio.h>
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point	point; // Declaration d'une variable de type structure t_point appelee point

	set_point(&point); // on envoie l'adresse de point a la fonction set_point
	printf("x = %d\ny = %d\n", point.x, point.y);
	return (0);
}
