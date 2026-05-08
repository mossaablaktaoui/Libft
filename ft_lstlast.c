/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlastl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:35:42 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/20 15:35:46 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	if (!lst)
		return (NULL);
	curr = lst;
	while (curr -> next != NULL)
		curr = curr -> next;
	return (curr);
}
/* 
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	node1 = malloc(sizeof(t_list));
	node1->content = "First";
	node1->next = NULL;
	node2 = malloc(sizeof(t_list));
	node2->content = "Second";
	node2->next = NULL;
	node3 = malloc(sizeof(t_list));
	node3->content = "Third";
	node3->next = NULL;
	head = node1;
	node1->next = node2;
	node2->next = node3;

	last = ft_lstlast(head);
	printf("Last node content: %s\n", (char *)last->content);

	free(node1);
	free(node2);
	free(node3);
} */
