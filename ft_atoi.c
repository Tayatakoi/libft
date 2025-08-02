/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:48:17 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/01 20:28:05 by samamaev         ###   ########.fr       */
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
/*int main(int ac, char **av)
{
    int saif;
    if (ac == 2)
    {
        saif = ft_atoi("42398573298573298573249805734980753980427593
		02475098342750983247527390823");
		printf("atoi: %d\n", atoi("423985732985732985732498
		0573498075398042759302475098342750983247527390823"));
        printf("ft_atoi: %d\n",saif);
    }
    return (0);
}*/