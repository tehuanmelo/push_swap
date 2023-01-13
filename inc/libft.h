/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:08 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/12 21:18:45 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void    ft_putstr(char *str);
int     ft_atoi(const char *str);
int     ft_isnumber(char *str);

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);

int     ft_lstsize(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_sortlst(t_list **list);
void    ft_freelst(t_list *list);
void	ft_lstadd_front(t_list **lst, t_list *new);
void    ft_indexlst(t_list **unsorted, t_list **sorted);
t_list  *ft_lstnew(int content);
t_list  *ft_lstlast(t_list *lst);

#endif