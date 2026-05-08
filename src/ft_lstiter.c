/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:41:41 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/23 09:41:45 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (!lst || !f)
		return ;
	node = lst;
	while (node != NULL)
	{
		f(node -> content);
		node = node -> next;
	}
}

/* 
void print_content(void *content)
{
	printf("%s\n", (char *)content);
}
int main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));
	t_list *head;

	a->content = strdup("First node");
	b->content = strdup("Second node");
	c->content = strdup("Third node");
	a->next = b;
	b->next = c;
	c->next = NULL;

	head = a;

	ft_lstiter(head, print_content);
} */
