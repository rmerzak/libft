/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:35:56 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/14 16:11:09 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	char	*p;
	int		j;

	j = 0;
	p = (char *)s;
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[j] != '\0')
	{
		str[j] = f(j, p[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
