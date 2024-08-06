/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:20:22 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/13 20:12:06 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief test for characters alphabetic
 *
 * @param c
 * @return return true if the param c is alphabetic char or false is not
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
