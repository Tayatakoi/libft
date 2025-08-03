/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:12:06 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/03 19:21:07 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	if (!count || !size)
		return (NULL);
	size_t	total_size;
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}
