/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:12:47 by anagarc4          #+#    #+#             */
/*   Updated: 2023/03/14 18:09:52 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * The atoi() function converts the initial portion of the string pointed to
     by str to int representation.
 **/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*str <= 13 && *str >= 9) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int ft_atoi(const char *str);

int main(void)
{
    const char *str = "-12-345";
    int result = ft_atoi(str);

    printf("String: %s\n", str);
    printf("Integer value: %d\n", result);

    return 0;
}
*/
