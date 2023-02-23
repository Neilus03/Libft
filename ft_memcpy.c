/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:48:52 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:10:07 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str_dst;
	char	*str_src;

	if (!dst && !src)
		return (NULL);
	str_dst = (char *)dst;
	str_src = (char *)src;
	i = 0;
	while (i < len)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return ((void *) str_dst);
}
/*
1. The function ft_memcpy takes three arguments: a pointer to the destination
   memory area (dst), a pointer to the source memory area (src), and the number
   of bytes to copy (len).

2. Inside the function, three variables are declared: i (an unsigned int), 
   str_dst (a char pointer), and str_src (a char pointer).

3. If both dst and src are null pointers, the function returns a null pointer.

4. The char pointers str_dst and str_src are assigned to dst and src, 
   respectively.

5. A while loop is entered, which copies the byte from the source string to 
   the destination string.

6. The variable i is incremented.

7. Once i is equal to len, the loop is exited and the function returns a void 
   pointer to the destination string.
*/
