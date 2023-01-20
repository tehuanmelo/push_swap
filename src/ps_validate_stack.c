/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_validate_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/20 18:36:47 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void are_duplicates(t_list *list)
{
    t_list *i;
    t_list *j;
    int tmp;

    i = list;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (i->data == j->data)
                return (0);
            j = j->next;
        }
        i = i->next;
    }
}

void is_sorted(t_list *list)
{
    t_list *i;
    t_list *j;
    int tmp;

    i = list;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (i->data == j->data)
                return (0);
            j = j->next;
        }
        i = i->next;
    }
}
