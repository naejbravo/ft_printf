/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:20:35 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:20:38 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief test for all ascii characters
 *
 * @param c
 * @return true if the param c is part of ascii table, false if is not
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
