/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:40:35 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 13:09:01 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char *s1 = "hello";
    char *s2 = "jello";
    size_t n = 3;
    int result_ft = ft_memcmp(s1, s2, n);
    int result_str = memcmp(s1, s2, n);

    printf("ft_memcmp result: %d\n", result_ft);
    printf("memcmp result: %d\n", result_str);

    if (result_ft == result_str)
        printf("ft_memcmp and memcmp produced the same result.\n");
    else
        printf("ft_memcmp and memcmp produced different results.\n");

    return 0;
}
*/

/*
1. The function ft_memcmp takes two pointers to constant void (s1 and s2) and a
   size_t type argument (n) as its arguments.

2. Inside the function, a variable i is declared and initialized to 0.

3. A while loop is entered.

4. Inside the while loop, the function checks if both *(unsigned char *)(s1 + i)
   and *(unsigned char *)(s2 + i) are not 0 (i.e., if they are not NULL).

5. If the condition in step 4 is true, the difference between the two characters
   is returned (i.e., *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i)).

6. If the condition in step 4 is not true, i is incremented by 1.

7. Once the end of the loop is reached, the function returns 0, which indicates
   that the two memory blocks are identical.
*/