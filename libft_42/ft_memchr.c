/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:10:07 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 19:30:23 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 *  The memchr() function locates the first occurrence of c (converted to an
 *  unsigned char) in string s.
 *  RETURNS: a pointer to the byte located, or NULL if no such byte exists 
 *  within n bytes.
 *  */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *) str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char str[] = "Hola caracola";
	char *ptr;
	int tab[7] = 

	// Search for the first occurrence of 'o' in str
	ptr = ft_memchr(str, 'r', strlen(str));

	if (ptr == NULL)
		printf("Character not found.\n");
	else
		printf("Character found at position %ld.\n", ptr - str);

		//errores dados 
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s", (char *)ft_memchr(tab, -1, 7));
}
*/
