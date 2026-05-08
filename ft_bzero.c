/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:23:17 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/16 09:23:21 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = 0;
		i++;
	}
}
/* 
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *str;
    str = malloc(sizeof(char) * 10);

    ft_bzero(str, 10);

    for (int i = 0; i < 10; i++)
        printf("%d ", (unsigned char)str[i]);
    printf("\n");

    free(str);
    return 0;
}
 */