/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:43:36 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/18 18:20:38 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static int	ft_count_digits(int c)
{
	int	count;

	count = 0;
	if (c < 0)
		c *= -1;
	while (c > 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int c)
{
	int		sign;
	int		len;
	char	*str;

	sign = 1;
	if (c < 0)
		sign = -1;
	len = ft_count_digits(c);
	if (c == 0)
		len = 1;
	str = (char *)malloc(len + (sign < 0) + 1);
	if (!str)
		return (NULL);
	if (sign < 0)
		str[0] = '-';
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1 + (sign < 0)] = (c % 10) * sign + '0';
		c /= 10;
		len--;
	}
	return (str);
}
/*
int main(int argc, char *argv[])	
{
	//I DONT KNOW WHY THE ORIGINAL ITOA DOES NOT WORK!
	(void)argc;
    int i = atoi(argv[1]);
    char *str1 = ft_itoa(i);
    //char *str2 = itoa(i);

    printf("Number: %d\n", i);
    printf("ft_itoa: %s\n", str1);
    //printf("itoa: %s\n", str2);
    //if (strcmp(str1, str2) == 0)
    //    printf("Results match.\n");
    //else
    //    printf("Results do not match.\n");
    free(str1);
    //free(str2);
    return 0;
}
*/