/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:14:37 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/15 19:34:17 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void index_stack(t_list **unsorted, t_list **sorted)
{
    int index;
    t_list *head_sorted;
    t_list *head_unsorted;

    head_sorted = *sorted;
    head_unsorted = *unsorted;
    while (head_unsorted)
    {
        index = 0;
        while (head_sorted)
        {
            if (*(int *)head_unsorted->data == *(int *)head_sorted->data)
                *(int *)head_unsorted->data = index;
            head_sorted = head_sorted->next;
            index++;
        }
        head_unsorted = head_unsorted->next;
        head_sorted = *sorted;
    }
}