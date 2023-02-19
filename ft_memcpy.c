/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:48:52 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/01/25 15:32:14 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str_dst;
	char	*str_src;

	if (!dst && !src)
		return (NULL);
	str_dst = (char *)dst;
	str_src = (char *)src;
	i = 0;
	while (i < len)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return ((void *) str_dst);
}
