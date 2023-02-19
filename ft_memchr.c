/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:06:45 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/14 11:47:56 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	while (j < n)
	{
		if (*(unsigned char *)(s + j) == (unsigned char)c)
			return ((void *)(s + j));
		j ++;
	}
	return (NULL);
}
