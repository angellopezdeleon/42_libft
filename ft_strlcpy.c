/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:52:20 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/08 18:24:41 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copy the string pointed to by src, including 
 * the terminating null byte ('\0'), to the buffer pointed to by dst
 * 
 * @param dst This is the destination string.
 * @param src The string to be copied.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The length of the string src.
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char			*tempdest;
	unsigned char	*tempsrc;
	size_t			i;
	size_t			srclen;

	srclen = ft_strlen(src);
	tempdest = (char *)dst;
	tempsrc = (unsigned char *)src;
	i = 0;
	if (!dst || !src)
		return (0);
	else if (dstsize != 0)
	{
		while (i + 1 < dstsize && i < srclen)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
		tempdest[i] = '\0';
	}
	return (srclen);
}
