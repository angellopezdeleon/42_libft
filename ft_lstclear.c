/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:13:15 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/24 17:53:40 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a pointer to a pointer to a linked list, and a pointer to a 
 * function that takes a void pointer and returns nothing. It then iterates 
 * through the linked list, deleting each node and setting 
 * the pointer to the next node
 * 
 * @param lst A pointer to the first element of a linked list.
 * @param del a pointer to a function that takes a single argument 
 * and returns nothing.
 */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}
