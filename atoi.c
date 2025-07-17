/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:48:17 by samamaev          #+#    #+#             */
/*   Updated: 2025/07/16 17:56:32 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_atoi(const char *str)
{
    int result;
    int sign;

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
    }
    return (result * sign);
}
/*int main(int ac, char **av)
{
    int saif;
    if (ac == 2)
    {
        saif = ft_atoi(av[1]);
        printf("saif: %d\n",saif);
    }
    return (0);
}*/