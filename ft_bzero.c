/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:25:56 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:21:22 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
The ft_bzero function sets the first n bytes of the memory area pointed to by
s to zero. It accomplishes this by calling the ft_memset function with the c
argument set to 0.

1. The function takes two parameters: a pointer to a memory region and a size.
	-The memory region is represented by a void pointer, which means it
	 can point to memory of any type.
	-The size parameter indicates the number of bytes to set to zero.

2. The function calls the ft_memset function, which sets a block of memory
   to a particular value.
	-ft_memset takes three arguments: a pointer to the start of the memory
     region, the value to set, and the size of the region to set.

3. The first argument passed to ft_memset is the pointer to the memory
   region passed to ft_bzero.

4. The second argument is the value to set, which is zero in this case.

5. The third argument is the size passed to ft_bzero.

6. When ft_memset completes, the memory region passed to ft_bzero will
   have been set to zero.

7. Because the ft_bzero function doesn't return a value, it doesn't
   need a return statement.
*/