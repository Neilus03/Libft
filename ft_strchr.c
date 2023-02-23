/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:48:34 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 11:18:02 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	j;

	j = 0;
	if (!s[j])
		return (NULL);
	while (s[j])
	{
		if ((s[j]) == (char)c)
			return ((char *)&(s[j]));
		j ++;
	}
	return (NULL);
}
/*
1. Initialize j to 0.

2. If the first character of s is null, return NULL.

3. Enter a loop that continues while s[j] is not null.

4. If s[j] is equal to c, return a pointer to s[j].

5. Increment j and go back to step 3.

6. Return NULL if the end of the string is reached without finding c.
*/