//
// Created by zerro on 28/10/2025.
//
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *ptr;

    if (!lst || !f)
        return ;
    ptr = lst;
    while (ptr)
    {
        f(ptr->content);
        ptr = ptr->next;
    }
}
