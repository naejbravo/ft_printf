/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:20:34 by jebravo-          #+#    #+#             */
/*   Updated: 2024/08/06 20:33:51 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int			i;
	uintptr_t	n;

	n = *(uintptr_t *)p;
	i = 0;
	i += ft_putstr("0x");
	i += ft_puthexa(((unsigned int)n), 'x');
	return (i);
}
