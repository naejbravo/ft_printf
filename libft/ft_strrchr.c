/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:26:27 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:26:28 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	c = (char)c;
	i = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[i]);
	while (i)
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	if (c == s[i])
		return ((char *)&s[i]);
	return (0);
}

// int main(void)
// {
//     char    str[] = "tester";
//     char    letra = 't';
//     printf("%s", ft_strrchr(str, letra));
// }