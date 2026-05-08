/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:34:36 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/16 18:34:40 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tmp = (char *)s + i;
		i++;
	}
	if (c == '\0')
		tmp = (char *)s + i;
	return (tmp);
}
/* 
#include <stdio.h>

int main(void)
{
    const char *str = "Hello World";
    char *res;

    res = ft_strrchr(str, 'o');
    if (res)
        printf("Found: %s\n", res - 1);
    else
        printf("Not found\n");
}
 */