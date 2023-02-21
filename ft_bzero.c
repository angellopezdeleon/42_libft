/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:20:08 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 16:59:18 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Ft_bzero() sets the first n bytes of the memory area pointed 
 * to by s to zero (bytes containing '\0')
 * 
 * @param s This is the pointer to the memory area to be filled.
 * @param n The number of bytes to be set to zero.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
