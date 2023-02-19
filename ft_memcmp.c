/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:40:35 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/18 16:41:52 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) && *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char *s1 = "hello";
    char *s2 = "jello";
    size_t n = 3;
    int result_ft = ft_memcmp(s1, s2, n);
    int result_str = memcmp(s1, s2, n);

    printf("ft_memcmp result: %d\n", result_ft);
    printf("memcmp result: %d\n", result_str);

    if (result_ft == result_str)
        printf("ft_memcmp and memcmp produced the same result.\n");
    else
        printf("ft_memcmp and memcmp produced different results.\n");

    return 0;
}
*/