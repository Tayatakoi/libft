/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:44:20 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/03 21:48:15 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	unsigned char *d;
    unsigned char *s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (n == 0)
		return (dst);
    while (n--)
        *d++ = *s++;
    return (dst);
}
