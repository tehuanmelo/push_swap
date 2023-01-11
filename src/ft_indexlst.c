/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:14:37 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/10 18:14:54 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void ft_indexlst(t_list **unsorted, t_list **sorted)
{
    t_list *i;
    t_list *j;
    int index;

    index = 0;
    i = *sorted;
    while (i)
    {
        j = *unsorted;
        while (j)
        {
            if (i->data == j->data)
                j->data = index;
            j = j->next;
        }
        i = i->next;
        index++;
    }
}