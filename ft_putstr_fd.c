/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:28:38 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/28 14:06:17 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Write a string to a file descriptor
 * 
 * @param str The string to be printed.
 * @param fd The file descriptor of the file to write to.
 */

#include"libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}
