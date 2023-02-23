/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:43:36 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 12:19:07 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_positive(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		mod;

	mod = 0;
	len = ft_count_digits(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	while (n)
	{
		len--;
		mod = ft_positive(n % 10);
		result[len] = mod + '0';
		n = n / 10;
	}
	return (result);
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