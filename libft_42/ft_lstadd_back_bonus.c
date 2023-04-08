/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:28:45 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 17:55:40 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It adds the node "New" to the end of the list "lst".
 * RETURNS: Nothing.
 * */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*old;

	old = ft_lstlast(*lst);
	if (!old)
		*lst = new;
	else
		old->next = new;
}
/*
int main()
{
    t_list *lst;
    t_list *new;

    // create the list
    lst = ft_lstnew("Hello World");
    // add some nodes
    ft_lstadd_back(&lst, ft_lstnew("How are you"));
    ft_lstadd_back(&lst, ft_lstnew("?"));
    // add a new node to the end
    new = ft_lstnew("Hope you're doing well");
    ft_lstadd_back(&lst, new);
    // check that the new node was added correctly
    while (lst)
    {
        ft_putstr_fd(lst->content, 1);
        ft_putchar_fd('\n', 1);
        lst = lst->next;
    }
    // verify that the last node is the new one we added
    if (new == ft_lstlast(lst))
        ft_putstr_fd("ft_lstadd_back function works correctly!\n", 1);
    else
        ft_putstr_fd("ft_lstadd_back function is not working correctly.\n", 1);
    return (0);
}
*/