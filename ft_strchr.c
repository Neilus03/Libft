/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:48:34 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/18 17:31:22 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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
