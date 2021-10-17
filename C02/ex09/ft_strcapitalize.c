/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:29:57 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/16 13:03:35 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_islow(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isup(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_islow(str[0]))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (ft_isup(str[i]))
		{
			str[i] += 32;
		}
		if (!(ft_isdigit(str[i - 1])))
		{
			if (!(ft_islow(str[i - 1])))
			{
				if (!(ft_isup(str[i - 1])))
				{
					if (ft_islow(str[i]))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
