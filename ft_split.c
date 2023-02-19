/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:35:33 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/16 09:33:58 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

/*
ft_countwords aims to count the amount of words in a sentence. Understanding
a word as the group of characters delimited by the c delimiter.
*/

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			j;
	int			i;
	char		**arr;
	int			len;

	arr = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			arr[j] = (char *)malloc((len + 1) * sizeof(char));
			ft_strlcpy(arr[j], s + i, len + 1);
			arr[j][len] = '\0';
			j++;
			i += len;
		}
		else
			i++;
	}
	return (arr);
}
/*
int main(void)
{
    char *str = "the quick brown fox";
    char **arr = ft_split(str, 'w');
	int i = 0;
    if (arr == NULL)
		return ((int)NULL);
	while (arr[i])
	{
		write (1, arr[i],strlen(arr[i]));
		i++;
		write (1, "\n", 1);
	}
	free(arr);
    return (0);
}
*/