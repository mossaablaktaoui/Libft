/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:07:22 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/20 11:07:26 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/* 
#include <stdio.h>
int main(void)
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew(NULL);
	
	printf("node1->content: %s\n", (char *)node1->content);
	printf("node1->next: %p\n", (void *)node1->next);
	printf("node2->content: %p\n", node2->content);
	printf("node2->next: %p\n", (void *)node2->next);
	
	free(node1);
	free(node2);
	
	return (0);
} */
