/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:23:42 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 17:54:28 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Adds the node 'new' at the beginning of the list 'lst'.
 * RETURNS: None
 * */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Create an empty list
    t_list *list = NULL;

    // Add some nodes to the beginning of the list
    ft_lstadd_front(&list, ft_lstnew("Mango"));
    ft_lstadd_front(&list, ft_lstnew("Tutifruti"));
    ft_lstadd_front(&list, ft_lstnew("!"));

    // Print the list
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s ", (char *)current->content);
        current = current->next;
    }

    // Free the memory used by the list
   // ft_lstclear(&list, free);

    return 0;
}
*/
