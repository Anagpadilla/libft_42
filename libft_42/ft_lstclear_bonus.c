/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:31:01 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:20:16 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It is used to delete and free all nodes from the given 'lst' node and 
 * onwards, using the provided 'del' function and the free(3) function. 
 * After all the nodes are deleted and freed, the pointer to the list must be 
 * set to NULL.
 * RETURNS: Nothing.
 * */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	my_del(void *data)
{
	free(data);
}

int	main()
{
	// To create some nodes:
	t_list *node1 = ft_lstnew("Helloo");
	t_list *node2 = ft_lstnew("Mango");
	t_list *node3 = ft_lstnew("!");

	//To create a list and to add the nodes:
	t_list *list = node1;
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	// To print the elements of the list: 
	printf("Before ft_lstclear:\n");
	while (list)
	{
		printf("%s ", (char *)list->content);
		list = list->next;
	}
	printf("\n");

	// To delete the list and to free the memory:
	ft_lstclear(&list, my_del);

	// To print elements after ft_lstclear:
	printf("After ft_lstclear:\n");
	while (list)
	{
		printf("%s ", (char *)list->content);
		list = list->next;
	}
	printf("\n");

	return (0);
}
*/