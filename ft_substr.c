/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:18:25 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/15 12:57:08 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	size_t			j;	

	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < start)
		i++;
	j = 0;
	while (j <= len)
	{
		substring[j] = s[i];
		j++;
		i++;
	}
	substring[j] = '\0';
	return (substring);
}
/*
int main()
{
    char *string = "The quick brown fox jumps over the lazy dog";
    char *substring = ft_substr(string, 10, 15);

    printf("Original string: %s\n", string);
    printf("Substring: %s\n", substring);

    free(substring);

    return (0);
}
*/