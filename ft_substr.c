/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:18:25 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/24 18:46:24 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	size_t			j;
	size_t			s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		substring[j] = s[i];
		j++;
		i++;
	}
	substring[j] = '\0';
	return (substring);
}

/*
The `ft_substr` function creates a new string by extracting `len` characters
from the string `s`, starting from the index `start`.

1. Allocate memory for the new substring.

2. Check if memory allocation was successful. If not, return `NULL`.

3. Initialize a counter `i` to 0.

4. Enter a loop that continues while `i` is less than `start`.

5. Increment `i`.

6. Initialize a counter `j` to 0.

7. Enter a loop that continues while `j` is less than `len` and s[i] != NULL.

8. Copy the character at position `i` of `s` to the `j`th position of the 
   new substring.

9. Increment `j`.

10. Increment `i`.

11. Set the character at the `j`th position of the new substring to a
    null byte.

12. Return the new substring.
*/
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