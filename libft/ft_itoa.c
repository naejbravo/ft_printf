/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:21:09 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:21:11 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// n: el entero a convertir.
// La string que represente el número.
// NULL si falla la reserva de memoria.
// Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.

static int	count(int n)
{
	int	lenght;

	lenght = 0;
	if (n <= 0)
		lenght = 1;
	while (n != 0)
	{
		lenght++;
		n /= 10;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	int			lenght;
	char		*tmp;
	long int	nbr;

	lenght = count(n);
	nbr = n;
	tmp = malloc(sizeof(char) * (lenght + 1));
	if (!tmp)
		return (0);
	if (nbr < 0)
	{
		tmp[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		tmp[0] = '0';
	tmp[lenght--] = '\0';
	while (nbr)
	{
		tmp[lenght] = ((nbr % 10) + '0');
		nbr /= 10;
		lenght--;
	}
	return (tmp);
}
