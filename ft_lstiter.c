/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:20:32 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 21:08:45 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Iterate through a linked list and apply a function to each element
 * 
 * @param lst A pointer to the first element of a linked list.
 * @param f The function to be applied to each element of the list.
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
