/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:26:07 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:26:08 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’
 *
 * @param s La string que iterar.
 * @param f  La función a aplicar sobre cada carácter.
 * @return La string creada tras el correcto uso de ’f’ sobre
cada carácter.
NULL si falla la reserva de memoria.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tmp)
		return (0);
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
