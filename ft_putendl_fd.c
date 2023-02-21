/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:26:50 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/28 14:07:10 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Write a string to a file descriptor, followed by a newline
 * 
 * @param str The string to be printed.
 * @param fd file descriptor
 */

#include<unistd.h>
#include"libft.h"

void	ft_putendl_fd(char *str, int fd)
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
	write(fd, "\n", 1);
}
