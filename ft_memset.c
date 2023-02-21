/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:56:31 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:39:27 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_memset() takes a pointer to a memory location, a value, 
 * and a number of bytes to fill, and fills the memory with the value
 * 
 * @param s This is the pointer to the memory area to be filled.
 * @param c The character to fill the memory with.
 * @param len The number of bytes to be set to the value c.
 * 
 * @return The address of the first byte of the memory area s.
 */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (len != '\0')
		temp[--len] = (unsigned char)c;
	return (s);
}
