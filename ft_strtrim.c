/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:18:21 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:17:24 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
The `ft_strtrim` function creates a new string that is a copy of the input
string `s1`, with leading and trailing characters from the character set
`set` removed.

1. Initialize a variable `start` to 0.

2. If the input string `s1` is `NULL`, return `NULL`.

3. Initialize a variable `end` to the length of the input string `s1` minus 1.

4. Enter a loop that continues while `start` is less than or equal to `end` and
   the character at the `start` position of `s1` is a member of the character
   set `set`.

5. Increment the variable `start` by 1.

6. Enter a loop that continues while `end` is greater than `start` and the
   character at the `end` position of `s1` is a member of the character set
   `set`.

7. Decrement the variable `end` by 1.

8. Calculate the length of the new string by subtracting `start` from `end` and
   adding 1.

9. Allocate memory for the new string using the `malloc` function.

10. Check if memory allocation was successful. If it was not successful,
    return `NULL`.

11. Create a new string by calling the `ft_substr` function with the input
    string `s1`, the `start` position, and the calculated length.

12. Set the character at the end of the new string to a null byte.

13. Return the new string.
*/

/*
int main()
{
    char *str = "    hello world    ";
    char *set = "hd";
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