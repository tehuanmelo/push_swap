/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:14:37 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/19 23:09:05 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void index_stack(t_list *unsorted, t_list *sorted)
{
    int index;
    t_list *tmp;

    while (unsorted)
    {
        index = 0;
        tmp = sorted;
        while (tmp)
        {
            if (unsorted->data == tmp->data)
            {
                unsorted->data = index;
                break;
            }
            tmp = tmp->next;
            index++;
        }
        unsorted = unsorted->next;
    }
}