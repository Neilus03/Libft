/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:01:59 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:16:46 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* 
1. Calculate the length of s1 and add 1 for the null terminator.

2. Allocate memory of len * sizeof(char) bytes and assign the pointer to dst.

3. If dst is NULL, return NULL.

4. Copy the contents of s1 to dst using ft_strlcpy.

5. Return dst. 
*/
