/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:58:24 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/17 09:58:30 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/* 
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";
    char *res;

    res = ft_memchr(str, 'o', 11);
    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found\n");
}
 */
