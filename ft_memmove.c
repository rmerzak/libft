/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:20:28 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/17 19:27:29 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*s;
	size_t	i;

	i = 0;
	if (len == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (char *) dst;
	s = (char *) src;
	if (dest < s)
	{
		while (len--)
		{
			dest[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			dest[len] = s[len];
	}
	return (dest);
}
