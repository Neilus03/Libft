/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:59:26 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:48:35 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
1. The function ft_calloc takes two arguments: count and size, both of which 
   are of type size_t.

2. Inside ft_calloc, a variable ptr of type void* is declared and initialized
   to the result of calling the malloc function with the product of count and 
   size as its argument.

3. If malloc fails to allocate memory, NULL is returned.

4. The ft_bzero function is called with ptr as its first argument and count
   as its second argument. This sets all count bytes of memory starting at
   ptr to 0.

5. The ptr variable is returned as the result of the ft_calloc function,
   which points to the block of memory that has been allocated and 
   zero-initialized.
*/