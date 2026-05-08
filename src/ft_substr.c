/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:26:19 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/18 09:26:24 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	total_len;

	if (!s)
		return (NULL);
	total_len = 0;
	while (s[total_len])
		total_len++;
	if (start >= total_len)
		len = 0;
	if (total_len - start < len)
		len = total_len - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/* 
#include <stdio.h>
int main(void)
{
	char *s = "Hello World!";
	char *sub;

	sub = ft_substr(s, 8, 50);
	printf("Test 1: %s\n", sub);
	free(sub);
}
 */