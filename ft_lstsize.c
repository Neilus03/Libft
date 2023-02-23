/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:14:55 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:55:55 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst -> next;
	}
	return (len);
}
/*
1. The function ft_lstsize takes a pointer to a t_list structure (lst) as its
   argument.

2. Inside the function, a variable len is declared and initialized to 0.

3. A while loop is entered.

4. Inside the while loop, len is incremented by 1.

5. lst is updated to the next element in the list until the end of the list is
   reached (i.e., lst->next is NULL).

6. Once the end of the list is reached, the function returns the value of len,
   which represents the number of elements in the list.
*/
