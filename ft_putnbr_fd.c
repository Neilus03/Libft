/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:41:33 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 10:21:58 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (fd)
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = -nbr;
		}
		if (nbr < 10)
			ft_putchar_fd((nbr + '0'), fd);
		else if (nbr >= 10)
		{
			ft_putnbr_fd((nbr / 10), fd);
			ft_putchar_fd(((nbr % 10) + '0'), fd);
		}
	}
}
/*
1. The function ft_putnbr_fd takes an integer n and a file descriptor fd as its
   arguments.

2. A variable nbr of type long is declared and initialized to n.

3. If fd is not zero (i.e., a valid file descriptor has been provided), the
   function proceeds.

4. If the value of nbr is negative, the minus sign is printed to the file
   descriptor and the absolute value of nbr is assigned to nbr.

5. If the absolute value of nbr is less than 10, the single digit value is
   printed to the file descriptor.

6. If the absolute value of nbr is greater than or equal to 10, the function
   recursively calls itself with the quotient of nbr divided by 10 as its
   argument and prints the remainder (obtained by taking the modulo of nbr and
   10) to the file descriptor.
*/