/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:59:22 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/12 21:13:45 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
**      The atoi() function converts the initial portion of the
**      string pointed to by str to int representation.
** 
*/

#include "../inc/libft.h"

int	ft_atoi(const char *str)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (sign == -1 && res * sign <= LLONG_MIN / 10)
			return (0);
		if (res >= LLONG_MAX / 10)
			return (-1);
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}