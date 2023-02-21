/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:09:56 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 19:48:27 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function returns 1 if the character is a letter, and 0 if it is not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a letter, 0 if not.
 */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
