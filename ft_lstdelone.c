/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:24:11 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/06 14:01:14 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free (lst);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("Yaaa"));
// 	printf("%s",node1 -> content);
// 	ft_lstdelone(node1, free);
// 	printf("%s",node1 -> content);
// 	return (0);
// }
