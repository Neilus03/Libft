/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:56:21 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:11:38 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size < dst_len)
		return (ft_strlen(src) + size);
	while (size > 0 && dst_len < size - 1 && src[i])
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	while (src[i++])
		dst_len++;
	return (dst_len);
}
/* 
1. Initialize dst_len to the length of dst.

2. Initialize i to 0.

3. If size is less than the length of dst, return the sum of the length of
   src and size.

4. Enter a loop that continues while size is greater than 0, dst_len is less
   than size - 1, and src[i] is not null.

5. Append src[i] to dst and increment dst_len and i.

6. Add a null terminator to the end of dst.

7. Enter a loop that continues while src[i] is not null and increment
   dst_len and i.

8. Return dst_len.
*/