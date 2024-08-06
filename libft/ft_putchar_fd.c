/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:24:37 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:24:38 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Envía el carácter ’c’ al file descriptor
especificado.
 *
 * @param c El carácter a enviar.
 * @param fd El file descriptor sobre el que escribir.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
