/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:51:25 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 19:48:42 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The above function checks if the character is printable.
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is printable, 0 if not.
 */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
