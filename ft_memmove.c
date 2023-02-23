/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:43:38 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 10:04:45 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str_dst;
	char	*str_src;

	str_dst = (char *)dst;
	str_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (str_dst < str_src)
		ft_memcpy(dst, src, len);
	else if (str_dst == str_src)
		return ((void *)dst);
	else
	{
		while (len > 0)
		{
			str_dst[len - 1] = str_src[len - 1];
			len--;
		}
	}
	return ((void *)str_dst);
}
/*
1. The function ft_memmove takes three arguments: a pointer to the
   destination string (dst), a pointer to the source string (src), and the
   number of bytes to be copied (len).

2. Two char pointers (str_dst and str_src) are declared and assigned to the
   values of dst and src, respectively.

3. If both dst and src are null pointers, the function returns a null
   pointer.

4. If the value of str_dst is less than the value of str_src, ft_memcpy
   is called with arguments dst, src, and len to copy len bytes from src
   to dst.

5. If the value of str_dst is equal to the value of str_src, the function
   returns dst.

6. If the value of str_dst is greater than the value of str_src, the while
   loop is entered.

7. Inside the while loop, each byte of the source string is copied to the
   corresponding byte of the destination string in reverse order (i.e., 
   starting from the end of the string and moving backwards).

8. The loop continues until all len bytes have been copied.

9. Finally, the function returns dst.
*/