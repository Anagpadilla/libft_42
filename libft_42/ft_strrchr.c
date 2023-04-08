/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:12 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/04 11:40:59 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * locates the first occurrence of c (converted to a char) in the string 
 * pointed to by s.  The terminating null character is considered to
 * be part of the string; therefore if c is `\0', the functions locate
 * the terminating `\0'.
 *
 * Return a pointer to the located character,i
 * or NULL if the character does not appear in the string.
 * */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *) s;
	len = ft_strlen(s);
	if (*(tmp + len) == (char) c)
		return (tmp + len);
	while (len--)
	{
		if (*(tmp + len) == (char) c)
			return (tmp + len);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = "I like avocado";
	char *result;

	result = ft_strchr(str, 'o');
	if (result == NULL)
		printf("No se encontró el caracter 'o' en la cadena.\n");
	else
		printf("El caracter 'o' se encontró en la posición %ld.\n", result - str);

	result = ft_strchr(str, 'z');
	if (result == NULL)
		printf("No se encontró el caracter 'z' en la cadena.\n");
	else
		printf("El caracter 'z' se encontró en la posición %ld.\n", result - str);

	return (0);
}*/
