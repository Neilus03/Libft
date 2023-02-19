/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:20:03 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/15 13:07:48 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	if ((unsigned char)s1 != (unsigned char)s2)
		return ((unsigned char)s1 - (unsigned char)s2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (ft_strcmp(&s1[i], &s2[i]) != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int main(void)
{
    char *s1 = "hello";
    char *s2 = "world";
    size_t n = 3;
    int result_ft = ft_strncmp(s1, s2, n);
    int result_str = strncmp(s1, s2, n);

    printf("ft_strncmp result: %d\n", result_ft);
    printf("strncmp result: %d\n", result_str);

    if (result_ft == result_str)
        printf("ft_strncmp and strncmp produced the same result.\n");
    else
        printf("ft_strncmp and strncmp produced different results.\n");

    return 0;
}
*/