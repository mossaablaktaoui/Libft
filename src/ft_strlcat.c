/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:20 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/16 15:22:26 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (size + src_len);
	while ((dest_len + i < size - 1) && (src[i] != '\0'))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/* 
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
    char dest[20] = "Hello";
    size_t ret;

    ret = ft_strlcat(dest, "World", 8);
    printf("dest: %s, return: %zu\n", dest, ret);
} */