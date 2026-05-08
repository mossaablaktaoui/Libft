/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:44:30 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/20 17:44:34 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		curr = *lst;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = new;
		new -> next = NULL;
	}
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

	node1 = malloc(sizeof(t_list));
	node1->content = "First";
	node1->next = NULL;
	node2 = malloc(sizeof(t_list));
	node2->content = "Second";
	node2->next = NULL;
	node3 = malloc(sizeof(t_list));
	node3->content = "Third";
	node3->next = NULL;

	head = NULL;

	ft_lstadd_back(&head, node1);
	printf("After adding node1: %s\n", (char *)head->content);

	ft_lstadd_back(&head, node2);
	printf("After adding node2: %s\n", (char *)head->next->content);

	ft_lstadd_back(&head, node3);
	printf("After adding node3: %s\n", (char *)head->next->next->content);

	free(node1);
	free(node2);
	free(node3);
} */
