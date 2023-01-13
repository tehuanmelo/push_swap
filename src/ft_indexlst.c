/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:14:37 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/12 22:00:44 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void ft_indexlst(t_list **unsorted, t_list **sorted)
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
            if (head_unsorted->data == head_sorted->data)
                head_unsorted->data = index;
            head_sorted = head_sorted->next;
            index++;
        }
        head_unsorted = head_unsorted->next;
        head_sorted = *sorted;
    }
}