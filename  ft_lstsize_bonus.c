#include "libft.h"
//
// Created by zerro on 28/10/2025.
//
typedef struct  s_list
{
    void    *content;
    struct s_list   *next;
}                   t_list;

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *p;

    i = 0;
    p = lst;
    while (lst != NULL)
    {
        p = p->next;
        i++;
    }
    return (i);
}