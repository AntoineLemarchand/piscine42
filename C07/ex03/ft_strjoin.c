/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:14:35 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/26 09:15:18 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_arrlens(int size, char **strs, char *sep)
{
	int i;
	int lens;

	i = 0;
	while (i < size)
	{
		lens += ft_strlen(strs[i]);
		i++;
	}
	lens += (ft_strlen(sep) - 1) * i;
	return (lens);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *arr;
	int i;

	i = 0;
	arr = malloc(ft_arrlens(size, strs, sep));
	if (!(arr) || size == 0)
		return(arr);
	while (i < size)
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
