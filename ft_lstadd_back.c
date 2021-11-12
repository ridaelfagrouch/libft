/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:34:35 by rel-fagr          #+#    #+#             */
/*   Updated: 2021/11/12 17:34:39 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *root;

    root = *alst;
    new -> next = NULL;
    if (!root)
        root = new;
    if(new != 0)
    {   ft_lstlast(root);
        root -> next = new;
    }
    else
        return ;
}