/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:51:01 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/02 19:40:16 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%p, %p\n", strchr("tripouille", 116 + 258), ft_strchr("tripouille", 116 + 258));
	return (0);
}