/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:35:33 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 11:14:50 by nde-la-f         ###   ########.fr       */
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

/*
ft_countwords:

1. The function takes two arguments, a pointer to a constant character array 
   (string) s, and a character c.

2. It initializes two integer variables, count and i, to 0.

3. The while loop checks whether s[i] is not null character. If it is not,
   then the loop continues, otherwise it exits the loop.

4. If s[i] is not equal to the character c, then the count variable is
   incremented and another while loop is executed that increments i until
   either s[i] is a null character or s[i] is equal to the character c.

5. If s[i] is equal to the character c, then i is incremented.

6. The function returns the count variable.
*/

/* 
ft_split:

1. The function takes two arguments, a pointer to a constant character
   array (string) s, and a character c.

2. It initializes four integer variables, j, i, and len to 0, and 
   declares a double pointer to a character array (string), arr.

3. It allocates memory for arr to store the number of words
   (delimited by the character c) in s by calling ft_countwords 
   function and adding 1 to include the terminating NULL pointer.
   The size of each element in arr is sizeof(char *).

4. The while loop checks whether s[i] is not a null character.
   If it is not,  then the loop continues, otherwise it exits the loop.

5. If s[i] is not equal to the character c, then the len variable is
   set to 0 and another while loop is executed that increments len 
   until either s[i + len] is a null character or s[i + len] is equal
   to the character c.

6. Memory is allocated for arr[j] to store the current word by calling 
   malloc function. The size of each element in arr[j] is
   (len + 1) * sizeof(char).

7. The ft_strlcpy function is called to copy len + 1 characters from
   s + i to arr[j]. This ensures that the last character of arr[j] is
   a null character, making it a valid C string.

8. The null character is explicitly added at the end of arr[j].

9. The j variable is incremented, and the i variable is incremented
   by len.

10. If s[i] is equal to the character c, then i is incremented.

11. The function returns arr, a double pointer to the array of strings
    that represent the words in s.
*/
