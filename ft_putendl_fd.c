/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:33:48 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 10:12:09 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (fd)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
1. The function ft_putendl_fd takes a pointer to a char (str) and an integer (fd)
   as its arguments.
2. Inside the function, a check is performed to ensure that fd is not equal to
   0, in which case the function simply returns without doing anything.
3. If fd is not 0, the function calls ft_putstr_fd to write the string pointed
   to by str to the file descriptor fd.
4. The function then calls ft_putchar_fd to write a newline character ('\n') to
   the file descriptor fd.
5. The function then returns.
*/