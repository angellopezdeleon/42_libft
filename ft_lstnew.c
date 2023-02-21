/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:32:29 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 21:17:11 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It creates a new node and returns it
 * 
 * @param content the content of the node
 * 
 * @return A pointer to a new node.
 */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!(node))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
