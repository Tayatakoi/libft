/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:13:57 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/05 20:32:24 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		new -> next = *lst;
		*lst = new;
		return ;
	}
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = new;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("2"));
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
//     while (head)
//     {
//         printf("%s\n", (char *)head->content);
//         head = head->next;
//     }
// }
