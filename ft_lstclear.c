/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:23:10 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/13 14:23:12 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *root;
    if(!*lst)
        *lst = NULL;
    root = *lst;
    while(root != NULL)
    { 
        del(root->content);
        free(root);
        root = root -> next;
    }
    *lst = NULL;
}
