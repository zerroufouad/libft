//
// Created by zerro on 28/10/2025.
//
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr;

    if (!lst || !del)
        return ;
    while (*lst)
    {
        ptr = (*lst)->next;
        ft_lstdelone((*lst), del);
        *lst = ptr;
    }
    *lst = NULL;
}