/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:04:07 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/19 14:42:57 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	char		*res;
	size_t		i;

	if (s && f)
	{
		len = ft_strlen(s) + 1;
		res = (char *)malloc(len * sizeof(char));
		if (!res)
			return (NULL);
		res[len - 1] = '\0';
		i = 0;
		while (s[i])
		{
			res[i] = (*f)(i, s[i]);
				i++;
		}
	}
	return (res);
}
/*
char add_five(unsigned int i, char c)
{
    return c + 5;
}

char	ft_my_toupper(unsigned int i, char c)
{
	(void)i;
	return (toupper(c));
}

int main(void)
{
    char *str = "hello";
    char *new_str = ft_strmapi(str, &add_five);

    printf("Original string: %s\n", str);
    printf("New string: %s\n", new_str);

    free(new_str);

    // Aquí empieza la segunda parte del programa
    char *str1 = "some other string";
    char *new_str1 = ft_strmapi(str1, &ft_my_toupper);

    printf("Original string: %s\n", str1);
    printf("New string: %s\n", new_str1);

    free(new_str1);
    return 0;
}
*/