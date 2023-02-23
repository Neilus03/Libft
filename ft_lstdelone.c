/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:17:19 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:10:07 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst -> content);
		free (lst);
	}
}
/*
1. The function ft_lstdelone takes two arguments: lst, which is a pointer to 
   a t_list structure, and del, which is a function pointer to a function used
   to free the memory of the content element of the list.

2. If lst is not NULL, the function enters an if statement.

3. Inside the if statement, del is called with lst->content as an argument
   to free the memory of the content element of the list.

4. The lst pointer is then freed using the free function.

5. The function returns.
*/