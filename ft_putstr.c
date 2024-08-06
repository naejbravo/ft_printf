/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:23:36 by jebravo-          #+#    #+#             */
/*   Updated: 2024/08/06 20:36:14 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_putstr(char *s)
{
	int		i;
	ssize_t	l;

	i = 0;
	l = ft_strlen(s);
	while (*s != '\0')
	{
		i += ft_putchar(*s);
		s++;
	}
	if (i != (int)l)
		return (-1);
	return (i);
}
