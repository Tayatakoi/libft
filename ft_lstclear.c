/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:11:49 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/06 18:05:53 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
	*lst = NULL;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("5\n"));
// 	t_list *node1 = ft_lstnew(ft_strdup("55"));
// 	t_list *node2 = ft_lstnew(ft_strdup("555"));
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstclear(&head, free);
// 	if (!head)
// 	printf("List is empty\n");
//     else
//         printf("List still has nodes\n");
// 	return (0);
// }
