/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:49:28 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 10:11:29 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write (fd, &c, 1);
}
/*
1. The function ft_putchar_fd takes a character (c) and a file descriptor (fd)
   as its arguments.

2. If fd is valid (i.e., non-zero), write the character c to the file
   descriptor using the write function. The write function takes the file
   descriptor (fd), the address of the character to write (&c), and the
   number of bytes to write (1) as arguments.
*/