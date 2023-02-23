/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:01:26 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 10:06:23 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
	size_t	i;

	i = 0;
	if (len_dst <= 0)
		return (ft_strlen(src));
	while ((i < len_dst - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*

1. Initialize i to 0.

2. If len_dst is 0 or less, return length of src.

3. Enter a loop that continues while i is less than (len_dst - 1) and
   src[i] is not null.

6. Append src[i] to dst and increment i.

7. Add a null terminator to the end of dst.

8. Return length of src.
*/
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
