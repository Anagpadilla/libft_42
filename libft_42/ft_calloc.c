/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:52:05 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 18:02:20 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * Memory allocation.
 * The calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to the
 * allocated memory.  The allocated memory is filled with bytes of value zero.
 * */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	buf = (void *) malloc (size * count);
	if (!(buf))
		return (NULL);
	ft_bzero(buf, size * count);
	return (buf);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
  int *num;
  int n = 2;
  
  num = (int*)ft_calloc(n, sizeof(int));
  
  if(num == NULL) 
  {
    return -1;
  }
  num[0] = 10;
  num[1] = 20;
  num[2] = 30;
  num[3] = 40;
  num[4] = 50;
  printf("Numbers:\n");
  for(int i=0; i<n; i++) {
    printf("%d ", num[i]);
  }
  free(num);
  return 0;
}
*/