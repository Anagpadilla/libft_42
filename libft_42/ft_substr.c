/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:04:18 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/26 18:38:58 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
 * La substring empieza desde el índice ’start’ y 
 * tiene una longitud máxima ’len’.
 * */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
    char *str = "Holaaa Holitaaaa";
	unsigned int start =  5;
	size_t len = ft_strlen(str);
    char *copy= ft_substr(str, start, len);

    if (copy == NULL)
    {
        printf("No se pudo reservar memoria.\n");
        return (1);
    }

    printf("La cadena original es: %s\n", str);
    printf("La copia de la cadena es: %s\n", copy);

	system("leaks a.out");
    free(copy);
    return (0);
}*/
