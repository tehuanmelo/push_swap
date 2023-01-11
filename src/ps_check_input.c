/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/11 21:29:54 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int is_number(char *str)
{
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+' || *str == '-')
        str++;
    if (*str == '0' || *str == '1')
        str++;
    else
        return 0;
    while (*str)
    {
        if (*str != ' ')
            return (0);
        str++;
    }
    return (1);
    
}

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
        if (ft_atoi(str[i]) == 0 || ft_atoi(str[i]) == -1)
        {
                if(!is_number(str[i])) 
                    return (1);
        }
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

int check_input(char **str, int size)
{
    if (is_unsorted(str, size) && !is_duplicated(str, size))
        return (1);
    else
        return (0);
}
