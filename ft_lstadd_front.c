/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:04:04 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 09:38:42 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
1. The function ft_lstadd_front takes two arguments: lst, which is a pointer
   to a pointer to a t_list structure, and new, which is a pointer to a t_list 
   structure.

2. Inside ft_lstadd_front, the next pointer of the new element is set to the
   current head of the list pointed to by lst. This ensures that the new element
   will be added at the beginning of the list.

3. The *lst pointer is updated to point to the new element, which effectively
   adds the new element to the beginning of the list.

4. Once the function returns, the list pointed to by lst will have a new
   element added to the front of it, which can be accessed by following the
   next pointer of the previous head of the list.
*/