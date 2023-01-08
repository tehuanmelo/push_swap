/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:21:26 by tde-melo          #+#    #+#             */
/*   Updated: 2023/01/08 21:49:18 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters
//     lst: The beginning of the list.
// Return value
//     Last node of the list
// External functs.
//     None
// Description
//     Returns the last node of the list.

#include "../inc/includes.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
