/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:13:09 by jebravo-          #+#    #+#             */
/*   Updated: 2024/08/06 20:24:10 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static int	ft_check_type(const char *s, va_list args)
{
	int	i;

	i = 0;
	if (*s == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*s == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (*s == 'd' || *s == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (*s == 'u')
		i += ft_u_putnbr(va_arg(args, unsigned int));
	else if (*s == 'x' || *s == 'X')
		i += ft_puthexa(va_arg(args, unsigned int), *s);
	else if (*s == 'p')
		i += ft_putptr(va_arg(args, void *));
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;

	va_start(args, s);
	i = 0;
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (ft_strchr("cspdiuxX", *s))
				i += ft_check_type(s, args);
			else if (*s == '%')
				i += ft_putchar('%');
		}
		else
			i += ft_putchar(*s);
		s++;
	}
	va_end(args);
	printf("\nprintf: %d", i);
	return (i);
}
