/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:23:38 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/19 22:58:01 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*l;

	if (!new)
		return ;
	if (!*alst)
	{
		ft_lstadd_front(alst, new);
	}
	else
	{
		l = ft_lstlast(*alst);
		l->next = new;
	}
}
