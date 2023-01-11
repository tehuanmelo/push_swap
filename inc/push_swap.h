/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:08 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/11 21:42:56 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

int     ft_atoi(const char *str);
int     ft_isnumber(char *str);
void    ft_putstr(char *str);
void    print_error();

int     ft_lstsize(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_sortlst(t_list **list);
void    ft_freelst(t_list *list);
void	ft_lstadd_front(t_list **lst, t_list *new);
void    ft_indexlst(t_list **unsorted, t_list **sorted);
t_list  *ft_lstnew(int content);
t_list  *ft_lstlast(t_list *lst);

int     check_input(char **str, int size);
void    push_swap(t_list **stack_a, t_list **stack_b);
t_list  *create_stack_a(char **list_of_numbers);

void    ra(t_list **stack_a);
void    pb(t_list **stack_a, t_list **stack_b);
void    pa(t_list **stack_a, t_list **stack_b);

//Dont forget to delete this function 
void print_list(t_list *list, char c);

#endif