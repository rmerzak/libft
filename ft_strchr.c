/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:10:04 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/14 02:56:32 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *) s;
	while (i < (ft_strlen(str) + 1))
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return ((void *)0);
}
