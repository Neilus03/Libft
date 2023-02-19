/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:56:21 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/01/22 13:00:02 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size < dst_len)
		return (ft_strlen(src) + size);
	while (size > 0 && dst_len < size - 1 && src[i])
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	while (src[i++])
		dst_len++;
	return (dst_len);
}
//unfinished code
