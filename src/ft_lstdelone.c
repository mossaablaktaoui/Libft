/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:57:18 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/20 17:57:22 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
	{
		free(lst);
		return ;
	}
	del(lst -> content);
	free(lst);
}
/* 
#include <stdlib.h>
#include <stdio.h>

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = malloc(sizeof(t_list));
	node1->content = malloc(10);
	((char *)node1->content)[0] = 'A';
	node1->next = NULL;

	node2 = malloc(sizeof(t_list));
	node2->content = malloc(10);
	((char *)node2->content)[0] = 'B';
	node2->next = NULL;

	node3 = malloc(sizeof(t_list));
	node3->content = malloc(10);
	((char *)node3->content)[0] = 'C';
	node3->next = NULL;

	printf("Before delete - node1 content: %c\n", *(char *)node1->content);
	printf("Before delete - node2 content: %c\n", *(char *)node2->content);
	printf("Before delete - node3 content: %c\n", *(char *)node3->content);

	ft_lstdelone(node1, &del_content);
	printf("node1 deleted (with content)\n");

	ft_lstdelone(node2, &del_content);
	printf("node2 deleted (with content)\n");

	ft_lstdelone(node3, &del_content);
	printf("node3 deleted (with content)\n");
} */
