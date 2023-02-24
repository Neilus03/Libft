/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:48:34 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/24 19:52:46 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			break ;
		str++;
	}
	if ((char)c == *str)
		return ((char *)str);
	return (0);
}

/*
The aim of the ft_strchr function is to locate the first occurrence of a 
character c in a given string s. The function takes in two parameters: a 
pointer to a null-terminated string s, and an integer value c which represents
the character to be located in s.


1. Iterate the pointer to the string
2. Every iteration check for matches with the character(c)
   If it matches break
3. Outside the iteration check for the match of (c) and pointer to str
   If it matches return the pointer, if not return (0)
*/