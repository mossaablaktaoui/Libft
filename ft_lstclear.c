/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:32:37 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/22 10:32:47 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = next_node;
	}
	*lst = NULL;
}
/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));
    t_list *head;

    if (!a || !b || !c)
    {
        perror("malloc");
        free(a); free(b); free(c);
        return 1;
    }
    a->content = strdup("one");
    b->content = strdup("two");
    c->content = strdup("three");
    a->next = b;
    b->next = c;
    c->next = NULL;
    head = a;
    ft_lstclear(&head, free);
    if (head == NULL)
        printf("ft_lstclear: OK — head is NULL\n");
    else
        printf("ft_lstclear: KO — head is not NULL\n");

    return 0;
} */