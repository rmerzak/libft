/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:46:04 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/06 18:18:34 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s;

	len = 0;
	while (s1[len] != '\0')
		len++;
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		s[len] = s1[len];
		len++;
	}
	s[len] = '\0';
	return (s);
}
