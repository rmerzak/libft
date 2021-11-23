/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:13:36 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/18 14:49:45 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char			*str;
	size_t						i;
	unsigned char				a;

	i = 0;
	a = c;
	str = s;
	if (n != 0)
	{
		while (i < n)
		{
			if (str[i] == a)
				return ((void *)s);
			i++;
			s++;
		}
	}
	return (NULL);
}
