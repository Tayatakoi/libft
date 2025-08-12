/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:01:30 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/04 21:16:07 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("2"));
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	while (head)
// 	{
// 		printf("%s\n", (char*)head->content);
// 		head = head->next;
// 	}
// 	return 0;
// }
