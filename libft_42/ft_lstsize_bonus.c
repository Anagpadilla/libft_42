/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:50:54 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/28 15:03:58 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It counts the number of nodes in a list.
 * RETURNS: the lenght of the list.
 * */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    // To create a list with 3 nodes:
    t_list *list = ft_lstnew("Mango");
    ft_lstadd_front(&list, ft_lstnew("Papaya"));
    ft_lstadd_front(&list, ft_lstnew("!"));

    // To show the lenght of the list:
    int size = ft_lstsize(list);
    printf("El tamaño de la lista es: %d\n", size);

    // To free the memory of the list:
   // ft_lstclear(&list, free);

    return 0;
}
*/
