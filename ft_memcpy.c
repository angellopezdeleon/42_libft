/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:24:48 by anglopez          #+#    #+#             */
/*   Updated: 2022/10/25 15:56:13 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copy n bytes from memory area src to memory area dest
 * 
 * @param dst This is the destination array where the content 
 * is to be copied, type-casted to a pointer.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * 
 * @return A pointer to the destination string.
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tempsrc;
	unsigned char	*tempdest;

	tempsrc = (unsigned char *)src;
	tempdest = (unsigned char *)dst;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*tempdest = *tempsrc;
		n--;
		tempdest++;
		tempsrc++;
	}
	return (dst);
}
