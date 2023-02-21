/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:29:01 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/24 18:29:04 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns the last element of a linked list.
 * 
 * @param lst A pointer to the first element of a linked list.
 * 
 * @return The last element of the list.
 */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	if (len <= 0)
		return (NULL);
	while ((len - 1) != 0)
	{
		len--;
		lst = lst->next;
	}
	return (lst);
}
