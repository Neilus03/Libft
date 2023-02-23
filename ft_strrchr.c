/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:50:27 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:55:30 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	j;

	j = ft_strlen(str);
	while (j >= 0)
	{
		if ((str[j]) == (char)c)
			return ((char *)&(str[j]));
		j --;
	}
	return (0);
}
/*
 The `ft_strrchr` function searches for the last occurrence of the character
 `c` in the string `str`.

1. Get the length of the string `str`.

2. Check if the last character in the string is a null byte. If it is, return 
   `NULL`.

3. Initialize a counter `j` to the length of the string `str`.

4. Enter a loop that continues while j is bigger than 0.

5. If the character at the `j`th position of `str` is equal to `c`, return a
   pointer to the `j`th position of `str`.

6. Decrement `j`.

7. If no occurrence of the character `c` is found, return 0.
*/