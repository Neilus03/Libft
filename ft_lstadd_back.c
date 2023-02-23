/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:27:22 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/23 09:34:44 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
/*
This code defines a function named ft_lstadd_back that adds a new
node to the end of a linked list.

1. The function ft_lstadd_back takes two arguments: a pointer to a pointer to
   the beginning of the linked list (lst) and a pointer to the new node to be
   added (new).

2. The function declares a variables of type t_list: last.

3. The function checks if the pointer to lst is NULL. If it is,
   the function sets the *lst to new.

4. If *lst is not NULL, then set the last node to the last node in the list
   using ft_lstlast function.

5. Assign the next node to new.
*/