/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:55:25 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/02/22 13:11:05 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}
/*
int main(void)
{
    char *content = "Hello, world!";
    t_list *new_node = ft_lstnew(content);

    if (new_node == NULL)
    {
        printf("ft_lstnew failed to create a new node.\n");
        return 1;
    }

    printf("New node content: %s\n", (char *)new_node->content);
    printf("New node next: %p\n", new_node->next);

    return 0;
}
*/
/*
1. The function ft_lstnew takes a void pointer (content) as its argument.

2. A new t_list node is created using malloc to allocate the required memory.

3. If the allocation fails (i.e., malloc returns NULL), the function returns 
   NULL.

4. The content pointer is assigned to the content member of the new node.

5. The next member of the new node is initialized to NULL.

6. The new node is returned.
*/