/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:27:22 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:33:37 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*newnode;

	if (!lst)
		return ;
	newnode = ft_lstnew(new);
	if (!newnode)
		return ;
	if (!*lst)
		return ;
	last = ft_lstlast(*lst);
	last -> next = newnode;
}
/*
This code defines a function named ft_lstadd_back that adds a new
node to the end of a linked list.

1. The function ft_lstadd_back takes two arguments: a pointer to a pointer to
   the beginning of the linked list (lst) and a pointer to the new node to be
   added (new).

2. The function declares two variables of type t_list: last and newnode.

3. The function checks if lst is NULL. If it is, the function returns without
   doing anything.

4. The function creates a new node using the ft_lstnew function and assigns
   the resulting pointer to newnode.

5. The function checks if newnode is NULL. If it is, the function returns
   without doinganything.

6. The function checks if the value pointed to by lst is NULL. If it is,
   the function returns without doing anything.

7. The function uses the ft_lstlast function to find the last node in the
   linked list, and assigns the resulting pointer to last.

8. The function sets the next field of last to point to the newnode, effectively
   adding the newnode to the end of the list.

*/