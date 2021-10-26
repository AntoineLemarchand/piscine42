/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:46:59 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/26 10:33:29 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*count_objs(char *str, char *charset)
{
	int	i;
	int	j;
	int strs_nb;

	i = 0;
	j = 0;
	obj_size = 0;
	if (charset[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == charset[0])
		{
			while (charset[j] == str[i + j] && charset[j] != '\0')
				j++;
			if (charset[j] == '\0')
				strs_nb++;

		}
		i++;
	}
	return (strs_nb);
}

char **ft_split(char *str, char *charset)
{
	char	**out;
	 int	i;

	i = 0;
	out = malloc(count_objs(str, charset) * sizeof(char*));
	while (i < count_objs(str, charset))
	{

	}
}
