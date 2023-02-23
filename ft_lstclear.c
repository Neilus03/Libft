/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:26:28 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:13:52 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (*lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		*lst = NULL;
	}
}
/*
1. The function ft_lstclear takes two arguments: lst, which is a pointer to a 
   pointer to a t_list structure, and del, which is a function pointer to a
   function used to free the memory of a single element in the list.

2.If *lst is not NULL, the function enters a while loop.

3. Inside the while loop, aux is set to the value of (*lst)->next.

4. The ft_lstdelone function is called with *lst and del as arguments to free
   the memory of the current element in the list.

5. *lst is then updated to the value of aux.

6. The loop continues until *lst is NULL, which indicates that all elements
   in the list have been freed.

7. *lst is set to NULL before the function returns, indicating that the list
   has been cleared.
*/