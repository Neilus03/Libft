/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:45:46 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:10:48 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst -> content);
			lst = lst -> next;
		}
	}
}
/*
1. The function ft_lstiter takes two arguments: lst, which is a pointer
   to a t_list structure, and f, which is a function pointer to a function
   that takes a pointer to a void type as an argument.

2. If lst and f are not NULL, the function enters an if statement.

3. Inside the if statement, a while loop is entered.

4. Inside the while loop, f is called with lst->content as an argument to
   apply the function to the current element in the list.

5. lst is then updated to the next element in the list.

6. The loop continues until lst is NULL, which indicates that all elements
   in the list have been processed.

7. The function returns.
*/