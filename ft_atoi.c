/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:09:51 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:16:35 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				sign;

	sign = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * num));
}
/*
int main()
{
	printf("%d", ft_atoi("9374h"));
	printf("\n");
	printf("%d", atoi("9374h"));
	return (0);
}
*/

/*
This is a function implementation for ft_atoi which takes a string str as
input and returns an integer. The function parses the string to extract the
first integer found and returns it.

The implementation consists of several steps:

1. Initialize num to 0, i to 0, and sign to 1. num will store the result of
   the conversion, i is an index into the string, and sign represents the 
   sign of the number.

2. Ignore any leading whitespace by incrementing i while the current character
   in str is a
   space or one of the vertical tab, form feed, or carriage return characters.

3. Check if the next character in the string is a sign character ('+' or '-'),
   if so, set the sign accordingly and increment i. If the character is '-',
   then the number is negative.

4. Loop through the remaining characters in the string and accumulate the
   integer value by multiplying num by 10 and adding the integer value of the
   current character (obtained by subtracting the character '0'). Increment
   i with each iteration. This continues until a non-digit character is
   encountered.

5. Finally, multiply the result by the sign and return it as an integer.

Note that this implementation assumes that the input string contains a valid 
integer, and it does not handle integer overflow.
*/