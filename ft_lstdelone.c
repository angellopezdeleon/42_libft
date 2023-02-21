/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:04:51 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 21:08:28 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a pointer to a linked list node and a pointer to a function 
 * that takes a void pointer and returns nothing, and it deletes 
 * the node by freeing the memory that the node's content pointer
 * points to, then the node itself
 * 
 * @param lst The address of a pointer to a link.
 * @param del a function that takes a pointer to a single element and frees it.
 * 
 * @return Nothing.
 */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
