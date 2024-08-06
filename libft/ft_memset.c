/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:24:30 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:24:31 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief fill spaces with the character c
 *
 * @param b
 * @param c
 * @param len
 * @return the pointer of the memory fill
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;

	pb = b;
	while (len--)
		*pb++ = (unsigned char)c;
	return (b);
}
