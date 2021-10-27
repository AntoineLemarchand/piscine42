/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:46:59 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/27 15:12:55 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words( char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ft_is_charset(str[i], charset) == 0)
	{
		count++;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((ft_is_charset(str[i], charset) == 0)
			&& (ft_is_charset(str[i - 1], charset) == 1))
			count++;
		i++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!(ft_is_charset(str[i], charset)))
		i++;
	return (i);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	 int	i;

	i = 0;
	dest = malloc(ft_word_len(src, charset));
	if (!dest)
		return (NULL);
	while (src[i] != '\0' && i < ft_word_len(src, charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	 int	i;
	 int	size;

	i = 0;
	size = ft_count_words(str, charset);
	arr = malloc((size + 1) * sizeof(char *));
	while (*str != '\0')
	{
		if (ft_is_charset(*str, charset) || i == 0)
		{
			while (ft_is_charset(*str, charset))
				str++;
			if (*str != '\0' && i < size)
			{
				arr[i] = ft_strdup(str, charset);
				i++;
			}
		}
		str++;
	}
	arr[i] = malloc(1);
	arr[i][0] = 0;
	return (arr);
}
