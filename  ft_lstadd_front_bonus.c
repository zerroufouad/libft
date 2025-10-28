#include "libft.h"
//
// Created by zerro on 28/10/2025.
//
typedef struct  s_list
{
    void    *content;
    struct s_list   *next;
}                   t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}