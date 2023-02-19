/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:54:29 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/01/17 14:12:21 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
/*
int main()
{
	int c;
	
	c =  'u' ;
	printf("\n%c -> %c",c, ft_toupper(c));
	printf("\n%c -> %c", c, toupper(c));
	return 0;
}
*/