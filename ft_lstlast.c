/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:20:11 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:16:26 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
1. The function ft_lstlast takes a pointer to a t_list structure (lst) as its 
   argument.
2. If lst is NULL, the function returns NULL.
3. Inside the function, a while loop is entered.
4. Inside the while loop, lst is updated to the next element in the list until
   the end of the list is reached (i.e., lst->next is NULL).
5. Once the end of the list is reached, the function returns the lst pointer,
   which points to the last element in the list.
*/