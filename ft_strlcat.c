/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:18:34 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/06 18:12:52 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	n;

	i = 0;
	len = ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
	{
		return (dstsize + ft_strlen(src));
	}
	else
	{
		n = ft_strlen(dst);
		while (src[i] && n < dstsize - 1)
		{
			dst[n] = src[i];
			i++;
			n++;
		}
		dst[n] = '\0';
		return (ft_strlen(src) + len);
	}
}
