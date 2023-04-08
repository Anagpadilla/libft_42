/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:16:32 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/15 16:09:04 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * la
 * The strdup() function allocates sufficient memory for a copy of the
 * string s1, does the copy, and returns a pointer to it.  The pointer may
 *  subsequently be used as an argument to the function free(3).
 *  */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s1);

int main()
{
    char *str = "Holaaa Holitaaaa";
    char *copy= ft_strdup(str);

    if (copy == NULL)
    {
        printf("No se pudo reservar memoria.\n");
        return (1);
    }

    printf("La cadena original es: %s\n", str);
    printf("La copia de la cadena es: %s\n", copy);

    free(copy);
    return (0);
}
*/
