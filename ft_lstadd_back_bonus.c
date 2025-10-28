//
// Created by zerro on 28/10/2025.
//
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *p;

    p = ft_lstlast(*lst);
    new->next = NULL;
    p->next = new;
}
