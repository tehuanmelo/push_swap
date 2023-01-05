/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/04 23:09:24 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_param_order(char **str, int size)
{
    int i;
    int j;

    i = 1;
    i = 1;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (ft_atoi(str[i]) > ft_atoi(str[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int check_parameters(char **str, int size)
{
    int i;
    int j;

    i = 1;
    while (i < size)
    {
        if (!ft_isnumber(str[i]))
            return (0);
        i++;
    }
    i = 1;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (ft_atoi(str[i]) == ft_atoi(str[j]))
                return (0);
            j++;
        }
        i++;
    }
    return check_param_order(str, size);
}
