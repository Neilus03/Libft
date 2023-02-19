/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:15:16 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/01/17 14:17:08 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
/*
int main()
{
	int c;
	
	c =  'U' ;
	printf("\n%c -> %c",c, ft_tolower(c));
	printf("\n%c -> %c", c, tolower(c));
	return 0;
}
*/