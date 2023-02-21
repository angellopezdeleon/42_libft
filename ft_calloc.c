/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:30:31 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 17:01:43 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It allocates memory for an array of count elements of size bytes each, 
 * and returns a pointer to the allocated memory
 * 
 * @param count The number of elements to be allocated.
 * @param size The size of the memory block, in bytes.
 * 
 * @return A pointer to the allocated memory.
 */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	nb;

	nb = (count * size);
	if (nb < count)
		return (NULL);
	tmp = malloc(nb);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, nb);
	return (tmp);
}
