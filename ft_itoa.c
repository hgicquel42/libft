/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:30:55 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 14:20:41 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_itoa_len(int n)
{
	size_t	l;

	l = n <= 0;
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	size_t	l;
	size_t	i;
	char	*r;
	long	x;

	l = ft_itoa_len(n);
	r = malloc(l + 1);
	if (!r)
		return (0);
	i = 0;
	x = n;
	if (n < 0)
	{
		x *= -1;
		r[i++] = '-';
	}
	r[l] = 0;
	while (i < l)
	{	
		r[--l] = (x % 10) + '0';
		x /= 10;
	}
	return (r);
}
