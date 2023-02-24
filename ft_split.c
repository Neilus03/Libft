/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:35:33 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/24 21:07:36 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	*free_list(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static char	*ft_word_dup(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_word_dup(s, c);
		if (!arr[i])
			free_list(arr);
		while (*s && *s != c)
			s++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
/*
int main(void)
{
    char *str = "hello!";
    char **arr = ft_split(str, ' ');
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
}*/

/*
The code includes the header file "libft.h".
The function ft_countwords is defined as static, which means it can only be
used in the same file. ft_word_count takes in two arguments, a string s and 
a character c, and returns an integer that represents the number of words
in s separated by the character c. The function ft_word_dup is also defined 
as static and takes in the same arguments as ft_word_count. It creates a 
copy of a word in s that is separated by c and returns a pointer to the copy.
ft_split is a function that takes in a string s and a character c. It splits
the string s into an array of strings, where each string is separated by 
the character c.
The function ft_split returns a pointer to the array of strings.
If s is NULL, ft_split returns NULL.

The function ft_word_count counts the number of words in s separated by c
by iterating through the string and counting each time a word is found. A 
word is found when a character that is not equal to c is encountered, and 
the function iterates through the word until it reaches the next occurrence 
of c or the end of the string.

The function ft_word_dup creates a copy of a word in s separated by c by 
iterating through the word and copying each character into a new string. 
The new string is then returned.
In ft_split, ft_word_count is called to get the number of words in s 
separated by c. ft_split then allocates memory for an array of strings of 
size count + 1 to store the strings that will be created.
If memory allocation fails, ft_split returns NULL.
A variable i is set to 0, and a loop is started that iterates i from 0 to 
count - 1. Within this loop:
Any leading occurrences of c are skipped by incrementing s until a 
character that is not equal to c is found.
ft_word_dup is called to create a copy of the current word, and the pointer
to the copy is stored in the ith element of the array.
If memory allocation fails in ft_word_dup, ft_split returns NULL.
The loop continues by incrementing s until the next occurrence of c is 
found or the end of the string is reached.
After the loop completes, the count element of the array is set to NULL to 
mark the end of the array.
The array of strings is then returned.
*/