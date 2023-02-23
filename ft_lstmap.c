/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:10:51 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:13:51 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new_content;
	t_list	*new_node;

	new_list = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new_content = f(lst -> content);
			new_node = ft_lstnew(new_content);
			if (!new_node)
			{
				free(new_content);
				ft_lstclear(&new_list, del);
				return (0);
			}
			ft_lstadd_back(&new_list, new_node);
			lst = lst -> next;
		}
	}
	return (new_list);
}
/*
1. The ft_lstmap function takes a pointer to a t_list structure (lst) and
   two function pointers (f and del) as its arguments.

2. If lst or either of the function pointers is NULL, the function returns
   NULL.

3. Inside the function, a new t_list structure pointer (new_list) and a void
pointer (new_content) are declared and initialized to NULL.

4. If the input list (lst) is not empty and both function pointers (f and del)
are not NULL, a while loop is entered.

5. Inside the while loop, the content of the current node is passed to the
function pointed to by f, and the returned value is used to create a new
node with the ft_lstnew function.

6. If the new node cannot be created, the function frees the new_content 
   pointer, frees the entire new list with ft_lstclear, and returns NULL.

7. Otherwise, the new node is added to the end of the new list with 
   ft_lstadd_back, and the current node is updated to the next node in
   the input list.

8. If the input list is empty or the while loop has finished executing, the
function calls ft_lstiter on the new list and the function pointer f.

9. The function returns the new list.
*/