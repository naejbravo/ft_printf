/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:20:59 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:21:01 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief test for printable characters includind space
 *
 * @param c
 * @return return true if param c is a printable char, false is not
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
