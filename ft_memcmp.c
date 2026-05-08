/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:40:12 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/17 10:40:22 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main(void)
{
    char a[] = "abd";
    char b[] = "abc";

    int res = ft_memcmp(a, b, 3);

    if (res == 0)
        printf("Memory blocks are equal\n");
    else if (res < 0)
        printf("a < b\n");
    else
        printf("a > b\n");
}
 */
