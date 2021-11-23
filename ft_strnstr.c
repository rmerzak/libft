/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:35:15 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/14 04:11:34 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (*n == '\0')
		return (h);
	while (h[i] != '\0')
	{
		j = 0;
		if (h[i] == n[j])
		{
			while (n[j] == h[i + j] && h[i + j] && n[j])
					j++;
			if (n[j] == '\0' && (i + j) <= len)
				return (h + i);
		}
		i++;
	}
	return (NULL);
}
