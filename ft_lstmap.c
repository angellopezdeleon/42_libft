/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:25:49 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 21:56:08 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a list, applies a function to each element of the list, 
 * and returns a new list with the results of the function
 * 
 * @param lst the list to iterate over
 * @param f a function that takes a void pointer and returns a void pointer
 * @param del a function that will be called on each element of the list 
 * to free the memory
 * 
 * @return A pointer to the new list.
 */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*new;
	void	*content;

	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (!element)
		{
			free(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, element);
		lst = lst -> next;
	}
	return (new);
}
