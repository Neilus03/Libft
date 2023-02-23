/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:37:47 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 11:51:42 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
1. The `ft_strnstr` function finds the first occurrence of the little string
   `little` in the big string `big`, where not more than `len` characters are
   searched.

2. Initialize `i` and `j` to 0.

3. Convert the `big` and `little` pointers to character pointers `t_big` and
   `t_little`, respectively.

4. If the first character of `little` is null, return `t_big`.

5. Enter a loop that continues while the character at position `i` of `t_big` is
   not null and `i` is less than `len`.

6. Set `j` to 0.

7. If the character at position `i` of `t_big` is equal to the first character of
   `t_little`, enter a nested loop.

8. Continue looping while the character at position `j` of `t_little` is not null
   and the sum of `i` and `j` is less than `len` and the character at position
   `i + j` of `t_big` is equal to the character at position `j` of `t_little`.

9. If the character at position `j` of `t_little` is null, return a pointer to
   the beginning of the substring in `t_big` that matches `t_little`.

10. Increment `i`.

11. If `little` is not found in `big`, return 0.
*/

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