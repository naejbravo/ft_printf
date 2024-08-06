/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:25:45 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:25:47 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

// int	main()
// {
// 	char dest[10] = "a";
// 	// printf("%zu, %s", ft_strlcat(dest, "lorem", 15), dest);
// 	ft_strlcat(dest, "lorem", 15);
// 	return (0);
// }