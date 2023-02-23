/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:06:45 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:58:13 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	while (j < n)
	{
		if (*(unsigned char *)(s + j) == (unsigned char)c)
			return ((void *)(s + j));
		j ++;
	}
	return (NULL);
}
/*
1. The function memchr searches the first n bytes of the memory block
   pointed to by s for the character c.

2. A counter j is initialized to 0.

3. If s is NULL, the function returns NULL.

4. Inside a while loop, the function checks if the byte at index j of the
   memory block pointed to by s is equal to the character c.

5. If the byte is equal to c, a pointer to the corresponding memory address
   is returned.
   
6. If c is not found after checking all n bytes, the function returns NULL.
*/