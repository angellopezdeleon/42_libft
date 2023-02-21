/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:28:16 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/24 18:29:26 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is lowercase, subtract 32 from it
 * 
 * @param c The character to be converted.
 * 
 * @return the uppercase equivalent of the character passed as an argument, 
 * if the argument is a lowercase letter.
 */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
