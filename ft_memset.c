/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:50:43 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:10:53 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}
/*
1. The function ft_memset takes a pointer to a block of memory (b) and sets
   the first len bytes of the block to the value of the parameter c.

2. A variable i is declared and initialized to 0.

3. A while loop is entered that runs until the index i is less than the length
   of the block (len).

4. Inside the while loop, the i-th byte of the block 
   (i.e., ((unsigned char *)b)[i]) is set to the value of the parameter
   c, cast to an unsigned char.

5. i is incremented by 1.

6. Once the end of the block is reached, the function returns the pointer
   to the block.
*/