//
// Created by zerro on 28/10/2025.
//
#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void *))
{

    if (!del || !lst)
        return ;
    del(lst->content);
    free(lst);
}