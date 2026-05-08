/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:02:55 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/16 10:06:26 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
/* 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *str;
    str = malloc(sizeof(char) * 10);
    if (!str) return 1;

    ft_memset(str, 3, 4);

    for (int i = 0; i < 10; i++)
        printf("%d ", (unsigned char)str[i]);
    printf("\n");

    free(str);
    return 0;
}
 */
