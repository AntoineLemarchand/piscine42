/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:29:37 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/25 18:47:23 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	        int	i;
	t_stock_str	*out;

	i = -1;
	if (ac < 0)
		ac = 0;
	out = malloc((ac + 1) * sizeof(t_stock_str));
	if (!out)
		return (NULL);
	while (++i < ac)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = ft_strdup(av[i]);
		out[i].copy = ft_strdup(out[i].str);
	}
	out[i].str = 0;
	return (out);
}
