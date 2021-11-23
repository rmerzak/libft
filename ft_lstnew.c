/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:38:25 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/18 21:01:17 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	void	*x;
	t_list	*new;

	x = content;
	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = x;
		new -> next = NULL;
	}
	return (new);
}
