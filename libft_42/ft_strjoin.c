/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:37:56 by anagarc4          #+#    #+#             */
/*   Updated: 2023/04/07 11:18:45 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Reserve (with malloc(3)) and return a new string, formed by concatenating
 * 's1' and 's2'. RETURN: The new string. NULL if the memory allocation fails.
 * */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;		

	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		s3[j++] = s1[i++];
	i = 0;
	while (s2[i])
		s3[j++] = s2[i++];
	s3[j] = 0;
	return (s3);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s1 = "Mandarina";
	char *s2 = "Papaya";
	char *s3 = ft_strjoin(s1, s2);

	if (!s3)
	{
		printf("Error: failed to allocate memory\n");
		return (1);
	}

	printf("%s\n", s3);

	free(s3);
	return (0);
}
*/
