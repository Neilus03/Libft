/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:18:21 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/15 13:13:40 by nde-la-f         ###   ########.fr       */
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

static int	in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	size_t			len;
	char			*str;

	start = 0;
	if (s1 == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (start <= end && in_set(set, s1[start]))
		start++;
	while (end > start && in_set(set, s1[end]))
		end--;
	len = (size_t)end - (size_t)start + 1;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str = ft_substr(s1, start, len);
	str[len] = '\0';
	return (str);
}
/*
int main()
{
    char *str = "    hello world    ";
    char *set = " ";
    char *trimmed_str = ft_strtrim(str, set);

    if (trimmed_str == NULL) {
        printf("Error: failed to allocate memory for trimmed string\n");
        return 1;
    }

    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);

    free(trimmed_str);
    return 0;
}
*/