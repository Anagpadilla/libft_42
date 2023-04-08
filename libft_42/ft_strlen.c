/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:15:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/08 16:50:11 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * It computes the length of the string s.  The strnlen() function attempts
 * to compute the length of s, but never scans beyond the first maxlen bytes 
 * of s.
 * RETURNS: the number of characters that precede the  terminating NULL
 * character.
 * */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	char *str = "Hello, worlid!";
	int len = ft_strlen(str);
	printf("Length of string '%s' is %d\n", str, len);
	return (0);
}
*/
