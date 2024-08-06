/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebravo- <jebravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:22:46 by jebravo-          #+#    #+#             */
/*   Updated: 2024/06/12 20:22:48 by jebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parámetros lst: un puntero a un nodo.
// f: la dirección de un puntero a una función usada
// en la iteración de cada elemento de la lista.
// del: un puntero a función utilizado para eliminar
// el contenido de un nodo, si es necesario.
// Valor devuelto La nueva lista.
// NULL si falla la reserva de memoria.
// Funciones autorizadas
// malloc, free
// Descripción Itera la lista ’lst’ y aplica la función ’f’ al
// contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
