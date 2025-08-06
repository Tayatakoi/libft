/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:48:17 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/05 16:17:01 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		str++;
		if (result > LLONG_MAX && sign == 1)
			return (-1);
		else if (result > LLONG_MAX && sign == -1)
			return (0);
	}
	return ((int)(result * sign));
}
// # include <stdio.h>
// int main(void)
// {
//     int saif;
//         saif = ft_atoi("9223372036854775806");
// 		printf("atoi: %d\n", atoi("9223372036854775806"));
//         printf("ft_atoi: %d\n",saif);
//     return (0);
// }