/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:01:59 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/16 08:27:12 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
There's an error " error: linker command failed with exit code 1 " that is
caused due to the incorrect linking of ft_strlen and ft_strlcpy functions.
So I decided to write it down here so the error doesn't cause problems.
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

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dst = (char *)malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, len);
	return (dst);
}
/*
int main(void) 
{
    char *str = "Hello, world!";
    char *copy1, *copy2;
    
    copy1 = ft_strdup(str);
    copy2 = strdup(str);
    
    if (strcmp(copy1, copy2) == 0) {
        printf("The ft_strdup function works correctly.\n");
    } else {
        printf("The ft_strdup function does not work correctly.\n");
    }
    free(copy1);
    free(copy2);
    
    return 0;
}
*/