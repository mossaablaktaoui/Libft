/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:49:17 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/23 11:49:21 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_list;
	t_list	*new_node;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	node = lst;
	while (node != NULL)
	{
		new_node = ft_lstnew(f(node -> content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		node = node -> next;
	}
	return (new_list);
}
/* 
#include <stdio.h>
void	*add_exclamation(void *content)
{
	char	*str;
	char	*new_str;

	str = (char *)content;
	new_str = malloc(strlen(str) + 2);
	if (!new_str)
		return (NULL);
	strcpy(new_str, str);
	strcat(new_str, "!");
	return (new_str);
}

int main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*new_list;

	node1 = ft_lstnew(strdup("Hello"));
	node2 = ft_lstnew(strdup("World"));
	node1->next = node2;
	node2->next = NULL;

	printf("📌 القائمة الأصلية: Hello → World\n");
	
	new_list = ft_lstmap(node1, add_exclamation, free);

	printf("✨ القائمة الجديدة: %s → %s\n\n", 
		(char *)new_list->content, 
		(char *)new_list->next->content);

	ft_lstclear(&node1, free);
	ft_lstclear(&new_list, free);

	printf("✅ النتيجة: Hello! و World! ✨\n");
} */
