/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:50:27 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/15 12:26:00 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	j;

	j = ft_strlen(str);
	if (!str[j])
		return (NULL);
	while (str[j])
	{
		if ((str[j]) == (char)c)
			return ((char *)&(str[j]));
		j --;
	}
	return (NULL);
}
