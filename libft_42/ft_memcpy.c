/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:27:17 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 19:33:44 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * The memcpy() function copies n bytes from memory area src to memory area
 * dst.  If dst and src overlap, behavior is undefined.
 * Returns: original value of dest.
 * */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	if (!dest && ! src)
		return (0);
	a = dest;
	b = src;
	while (n-- > 0)
	{
		*a = *b;
		a++;
		b++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    char str1[] = "Hola";
    char str2[] = "Caracola";
    char *result = (char*)malloc(sizeof(str1));

    printf("Antes  memcpy:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("Result: %s\n", result);

    // Copia str1 en result:
   	result = ft_memcpy(result, str1, strlen(str1) + 1); 
	// Copia str2 en result después de str1:
	result = ft_memcpy(result + strlen(str1), str2, strlen(str2) + 1); 
    printf("Después memcpy:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("result: %s\n", result);

    return 0;
}*/
