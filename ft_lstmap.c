/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:37:57 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/13 17:38:01 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *root;
    t_list *tmp;

    tmp = NULL;
    root = lst;
    while(root->next != NULL)
    {
        f(root->content);
        root = root->next;
    }
    tmp = (t_list *)maloc(sizeof(t_list));
    if(!tmp)
        return (NULL);
    tmp->content = lst->content;
    tmp->next = lst->next;
    del(tmp->content);
    free(root);
    return (tmp);
}
