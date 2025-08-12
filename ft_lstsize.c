/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:45:06 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/05 20:32:50 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	char	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst -> next;
	}
	return (len);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("2"));
// 	t_list *node3 = ft_lstnew(ft_strdup("3"));
// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);
// 	printf("%d\n",ft_lstsize(node1));
// 	return (0);
// }
