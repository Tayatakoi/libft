/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:53:58 by samamaev          #+#    #+#             */
/*   Updated: 2025/07/28 19:54:51 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			if (ptr1 > ptr2)
			{
				ptr1[len - 1 - i] = ptr2[len - 1 - i];
				i++;
			}
			else
			{
				ptr1[i] = ptr2[i];
				i++;
			}
		}
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char	str[] = "123456";
// 	printf("%s\n", memmove(str + 2, str, 2));
// 	return (0);
// }