/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:19:53 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/06 15:44:43 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
// #include <stdio.h>
// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }
// int main (void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("2"));
//  	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstiter(head, print_content);
// }
