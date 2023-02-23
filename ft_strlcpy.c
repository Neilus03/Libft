/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:01:26 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:11:46 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
	size_t	src_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (len_dst == 0)
		return (src_len);
	i = 0;
	while (i < len_dst - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int main(void)
{
	char dst[5] = "";
	const char *src = "hello";
	size_t len_dst = sizeof(dst);
	
	size_t result_ft = ft_strlcpy(dst, src, len_dst);
	size_t result_expected = strlcpy(dst, src, len_dst);
	
	printf("ft_strlcpy result: %zu\n", result_ft);
	printf("strlcpy result: %zu\n", result_expected);
	
	if (result_ft == result_expected)
		printf("ft_strlcpy and strlcpy produced the same result.\n");
	else
		printf("ft_strlcpy and strlcpy produced different results.\n");
	printf("dst: %s\n", dst);
	return (0);
}
*/
/*
1. If either dst or src is NULL, return 0.

2. Initialize src_len to the length of src.

3. If len_dst is 0, return src_len.

4. Initialize i to 0.

5. Enter a loop that continues while i is less than len_dst - 1 and
   src[i] is not null.

6. Append src[i] to dst and increment i and dst_len.

7. Add a null terminator to the end of dst.

8. Return src_len.
*/