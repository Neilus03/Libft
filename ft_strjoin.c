/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:48:47 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/15 13:05:22 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;	

	new_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_string[i] = s2[j];
		j++;
		i++;
	}
	return (new_string);
}
/*
int main()
{
    char *s1 = "Theory";
	char *s2 = "Practicum";
    char *new_string = ft_strjoin(s1, s2);

    printf("Original strings: %s & %s\n", s1,s2);
    printf("New_string: %s\n", new_string);

    free(new_string);

    return (0);
}
*/