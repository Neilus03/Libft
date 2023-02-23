/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:43:36 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:31:37 by nde-la-f         ###   ########.fr       */
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
/*
1. The first function ft_count_digits takes an integer c as an argument and
   returns the number of digits in c.

2. Inside ft_count_digits, a variable count is initialized to 0.

3. If c is negative, its sign is changed to positive.

4. A while loop is initiated that divides c by 10 until c is no longer
   greater than 0, counting the number of times it was divided along the
   way and storing that count in the count variable.

5. Once the loop finishes, the final count is returned by the function.

6. The second function ft_itoa takes an integer c as an argument and returns
   a character string that represents c as an ASCII string.

7. Inside ft_itoa, two variables sign and len are initialized to 1 and 0,
   respectively.

8. If c is negative, sign is set to -1.

9.The len variable is set to the number of digits in c using the
  ft_count_digits function. If c is zero, len is set to 1.

10.Memory is allocated for a character array str of length len + (sign < 0) + 1.

11.If memory allocation fails, NULL is returned.

12. If sign is negative, the first character in str is set to a minus sign.

13. The final character in str is set to a null terminator.

14. A while loop is initiated that iterates from len down to 1, storing each
    digit of c as an ASCII character in str.

15. Inside the loop, the current digit of c is extracted using the modulus
    operator and multiplied by sign to convert it to a positive number if
	necessary.

16. The resulting value is added to the ASCII code for the digit zero ('0')
    to convert it to the corresponding character.

17. The resulting character is then stored in str at the appropriate position,
    taking into account the sign of the original number.

18. Once the loop finishes, the str array is returned as the result of the
    ft_itoa function.
*/