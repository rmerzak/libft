/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:44:33 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/19 21:47:57 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numfint(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	neg(long *nb, char *s)
{
	if (*nb < 0)
	{
		*s = '-';
		*nb = *nb * -1;
	}
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		i;
	long		nb;
	size_t		w;

	i = 0;
	nb = n;
	w = ft_numfint(nb);
	if (nb < 0)
		i++;
	s = (char *)malloc(sizeof(char) * (w + i + 1));
	if (!s)
		return (NULL);
	s[w + i] = '\0';
	neg(&nb, &s[0]);
	while (w)
	{
		s[w + i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		w--;
	}
	return (s);
}
