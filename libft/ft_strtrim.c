/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:26:33 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:26:34 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]) != NULL)
		j--;
	tmp = (char *)malloc((j - i) + 1);
	if (!tmp)
		return (0);
	ft_strlcpy(tmp, s1 + i, j - i + 1);
	return (tmp);
}
