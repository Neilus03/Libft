/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:20:03 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:12:11 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	if ((unsigned char)s1 != (unsigned char)s2)
		return ((unsigned char)s1 - (unsigned char)s2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (ft_strcmp(&s1[i], &s2[i]) != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
1. The `ft_strcmp` function compares the two strings `s1` and `s2`.

2. Cast `s1` and `s2` as unsigned characters and compare them.

3. If the characters differ, return the difference between the unsigned
   chars.

4. If the characters are equal, continue comparing the next characters.

5. If both strings are equal, return 0.


1. The `ft_strncmp` function compares at most `n` characters of the two
   strings `s1` and `s2`.

2. Initialize `i` to 0.

3. Enter a loop that continues while the character at position `i` of
  `s1` and `s2` are not null and `i` is less than `n`.

4. If the characters differ, return the difference between the unsigned chars.

5. If the characters are equal, continue comparing the next characters.

6. If `n` characters are compared and both strings are equal, return 0.

7. If `i` is less than `n` and `s1[i]` is not equal to `s2[i]`, return the
   difference between the unsigned chars at the `i`th position.

8. If `i` is equal to `n` and all characters are equal, return 0.
*/

/*
int main(void)
{
    char *s1 = "hello";
    char *s2 = "world";
    size_t n = 3;
    int result_ft = ft_strncmp(s1, s2, n);
    int result_str = strncmp(s1, s2, n);

    printf("ft_strncmp result: %d\n", result_ft);
    printf("strncmp result: %d\n", result_str);

    if (result_ft == result_str)
        printf("ft_strncmp and strncmp produced the same result.\n");
    else
        printf("ft_strncmp and strncmp produced different results.\n");

    return 0;
}
*/