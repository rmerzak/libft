/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:42:34 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/18 21:00:27 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new != NULL || *alst != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
	return (new);
}
