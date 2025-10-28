#include "libft.h"
//
// Created by zerrou on 28/10/2025.
//

t_list  *ft_lstnew(void *content)
{
    t_list  *new;
    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}