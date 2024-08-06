/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:25:38 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:25:41 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	tmp = (unsigned char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
		return (0);
	while (s1[i])
		tmp[j++] = s1[i++];
	i = 0;
	while (s2[i])
		tmp[j++] = s2[i++];
	tmp[j] = 0;
	return ((char *)tmp);
}
