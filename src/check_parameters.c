/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/05 22:39:33 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_unsorted(char **str, int size)
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

int is_duplicated(char **str, int size)
{
    int i;
    int j;

    i = 1;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (ft_atoi(str[i]) == ft_atoi(str[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int check_parameters(char **str, int size)
{
    if (is_unsorted(str, size) && !is_duplicated(str, size))
        return (1);
    else
        return (0);
}
