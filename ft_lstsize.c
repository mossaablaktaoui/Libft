/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:25:54 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/20 15:25:58 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = lst;
	while (curr != NULL)
	{
		i++;
		curr = curr -> next;
	}
	return (i);
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

	head = node1;
	node1->next = node2;
	node2->next = node3;

	printf("List size: %d\n", ft_lstsize(head));

	free(node1);
	free(node2);
	free(node3);
} */
