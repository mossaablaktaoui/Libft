/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:18:26 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/18 12:18:29 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_it_in(char chr, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	last_index;
	int	start;

	if (!s1)
		return (NULL);
	last_index = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_is_it_in(s1[start], set))
		start++;
	while (last_index && ft_is_it_in(s1[last_index - 1], set))
		last_index--;
	if (start > last_index)
		last_index = start;
	return (ft_substr(s1, start, (last_index - start)));
}
/* 
#include <stdio.h>

int main(void)
{
	char *s1 = "  --Hello World--  ";
	char *set = " -";
	char *res;

	res = ft_strtrim(s1, set);
	printf("Result: '%s'\n", res);
	free(res);
}
 */