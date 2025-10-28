#include "libft.h"
//
// Created by zerro on 28/10/2025.
//


t_list *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    if (!lst)
        return (NULL);
    ptr = lst;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return (ptr);
}