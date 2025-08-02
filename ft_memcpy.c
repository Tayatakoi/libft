/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:44:20 by samamaev          #+#    #+#             */
/*   Updated: 2025/07/24 19:51:25 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (dst);
}
