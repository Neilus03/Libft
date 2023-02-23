/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:31:11 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:03:33 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd)
	{
		while (s[i] != '\0')
		{	
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
/*
1. The function takes two arguments, a pointer to a character array (string) 
   s and an integer fd.

2. It initializes an integer variable i to 0.

3. It checks whether fd is not 0 (standard output). If fd is 0, then the 
   function does nothing.

4. If fd is not 0, then it enters a while loop that checks whether s[i] is
   not null character. If it is not, then the loop continues, otherwise it
   exits the loop.

5. The ft_putchar function is called to print the current character of s to
   the file descriptor fd.

6. The i variable is incremented.

7. The function prints the string s to the file descriptor fd.
*/