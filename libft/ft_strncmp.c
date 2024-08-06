/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:26:12 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:26:14 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*s1 || *s2))
	{
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		else if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
