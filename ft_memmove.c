/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:54:19 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/16 18:52:05 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the destination is less than the source, copy the source 
 * to the destination. Otherwise, copy the source to the destination in reverse
 * 
 * @param dst This is the destination array where the content is to be copied, 
 * type-casted to a pointer.
 * @param src This is the pointer to the source of data to be copied, 
 * type-casted to a pointer of type void*.
 * @param len The number of bytes to be moved.
 * 
 * @return The destination pointer is being returned.
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	tempdest = dst;
	tempsrc = (unsigned char *)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len--)
			tempdest[len] = tempsrc[len];
	}
	return (dst);
}
