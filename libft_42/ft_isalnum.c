/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:41:15 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/02 19:14:19 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * The isalnum() function tests for any character for isalpha(3) or isdigit(3) 
 * RETURNS: zero if the character tests false and returns non-zero 
 * if the character tests true.
 * 
 * */
#include "libft.h"

int	ft_isalnum( int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main()
{
    int c = '&';
    if (ft_isalnum(c))
        printf("%c is alphanumeric\n", c);
    else
        printf("%c is not alphanumeric\n", c);
    return 0;
}
*/
