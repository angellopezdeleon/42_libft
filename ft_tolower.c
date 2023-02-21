/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:31:36 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 19:47:36 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is uppercase, convert it to lowercase
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase version of the character.
 */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
