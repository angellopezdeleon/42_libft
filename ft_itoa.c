/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:59:32 by anglopez          #+#    #+#             */
/*   Updated: 2022/09/21 11:18:30 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It converts an integer to a string
 * 
 * @param n the number to convert
 * 
 * @return A string of the number.
 */

#include "libft.h"
#include <stdlib.h>

static int	nblen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	toa(long int ln, char *str, int n)
{
	int	i;

	if (n < 0)
		i = nblen(ln) + 1;
	else
		i = nblen(ln);
	if (ln == 0)
	{
		str[1] = '\0';
		str[0] = 48;
	}
	else
	{
		str[i--] = '\0';
		while (i >= 0)
		{
			str[i] = (ln % 10) + 48;
			ln /= 10;
			i--;
		}
	}
	if (n < 0)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			sign;
	long int	ln;

	sign = 0;
	ln = (long int)n;
	i = nblen(ln);
	if (ln <= 0)
	{
		sign--;
		i++;
		ln *= sign;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	toa(ln, str, n);
	return (str);
}
