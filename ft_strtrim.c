/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:42:02 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/20 01:12:55 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_findice(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (s1[i] == set[j])
			i++;
		else
			return (i);
	}
	return (-1);
}

static int	ft_lindice(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	while (i >= 0)
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (s1[i] == set[j])
			i--;
		else
			return (i);
	}
	return (-2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	int		i;
	char	*s;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_findice(s1, set);
	end = ft_lindice(s1, set);
	len = (end - start);
	s = (char *)malloc((len + 2) * sizeof(char));
	if (!s)
		return (NULL);
	while (start <= end && i <= len)
	{
		s[i] = s1[start];
		start++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
