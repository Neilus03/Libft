/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:43:38 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/14 09:00:42 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str_dst;
	char	*str_src;

	str_dst = (char *)dst;
	str_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (str_dst < str_src)
		ft_memcpy(dst, src, len);
	else if (str_dst == str_src)
		return ((void *)dst);
	else
	{
		while (len > 0)
		{
			str_dst[len - 1] = str_src[len - 1];
			len--;
		}
	}
	return ((void *)str_dst);
}
