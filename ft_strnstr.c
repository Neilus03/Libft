/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:37:47 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/14 08:20:47 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*t_big;
	char	*t_little;

	i = 0;
	j = 0;
	t_big = (char *)big;
	t_little = (char *)little;
	if (t_little[j] == '\0')
		return (t_big);
	while (t_big[i] && i < len)
	{
		j = 0;
		if (t_big[i] == t_little[j])
		{
			while (t_little[j] && (i + j < len) && t_big[i + j] == t_little[j])
				j++;
			if (t_little[j] == '\0')
				return (&t_big[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
    const char big[] = "Programs";
	const char little[] = "gra";
	
    printf("%s",ft_strnstr(big, little, sizeof(big)));
	printf("\n");
    printf("%s",strnstr(big, little, sizeof(big)));

    return 0;
}
*/