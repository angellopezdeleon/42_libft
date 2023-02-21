/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:35:14 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/25 15:42:54 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It copies the string src to the end of dst, but never more than 
 * dstsize - 1 bytes, and then NUL-terminates the result
 * 
 * @param dst The destination string.
 * @param src The string to be appended.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The length of the string it tried to create.
 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			dstlen;
	size_t			result;

	dstlen = ft_strlen(dst);
	result = 0;
	if (dstsize > dstlen)
		result = ft_strlen(src) + dstlen;
	else
		result = ft_strlen(src) + dstsize;
	i = 0;
	while ((dstlen + 1) < dstsize && src[i])
		dst[dstlen++] = src[i++];
	if (dstlen <= dstsize || dstsize == 0)
		dst[dstlen] = '\0';
	return (result);
}
