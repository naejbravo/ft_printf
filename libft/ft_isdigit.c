/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:20:46 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:20:49 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief test for digit character
 *
 * @param c
 * @return true if param c is a digit or false is not
 */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
