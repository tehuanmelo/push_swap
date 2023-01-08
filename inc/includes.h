/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:08 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/08 22:03:01 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INCLUDES_H
# define INCLUDES_H

#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;

int     ft_atoi(const char *str);
int     ft_isnumber(char *str);
void    ft_putstr(char *str);

int	    ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_sortlst(t_list **list);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);

void    print_error();


# endif