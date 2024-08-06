/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:25:07 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:25:08 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cwords(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	int		flag;

	i = 0;
	counter = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && !flag)
		{
			counter++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	i;
	size_t	len;

	tmp = (char **)malloc(sizeof(char *) * (cwords(s, c) + 1));
	if (!tmp || !s)
		return (0);
	i = 0;
	len = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			tmp[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	tmp[i] = 0;
	return (tmp);
}
