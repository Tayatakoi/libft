/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:58:54 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/06 18:01:02 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*uzel;
	t_list	*header;
	void	*new_content;

	if (!lst || !f ||! del)
		return (NULL);
	header = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		uzel = malloc(sizeof(t_list));
		if (!uzel)
		{
			del(new_content);
			ft_lstclear(&header, del);
			return (NULL);
		}
		uzel -> content = new_content;
		uzel->next = NULL;
		ft_lstadd_back(&header, uzel);
		lst = lst -> next;
	}
	return (header);
}

#include <stdio.h>

void *dup_content(void *content)
{
    return (ft_strdup((char *)content));
}
// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("000"));
// 	t_list *node1 = ft_lstnew(ft_strdup("111"));
// 	t_list *node2 = ft_lstnew(ft_strdup("222"));
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	t_list *new_lst = (ft_lstmap(head, dup_content, free));
// 	t_list *temp = new_lst;
// 	while(temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp ->next;
// 	}
// 	ft_lstclear(&head, free);
// 	ft_lstclear(&new_lst, free);
// }
