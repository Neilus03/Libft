/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:01:26 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/15 13:06:58 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*
There's an error " error: linker command failed with exit code 1 " that is
caused due to the incorrect linking of ft_strlen function.
So I decided to write them down here so the error doesn't cause problems.
*/
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

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