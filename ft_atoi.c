/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:55:03 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 16:33:48 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *s)
{
	size_t	i;
	int		n;
	int		r;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	n = 1;
	while (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			n *= -1;
	r = 0;
	while (s[i] >= '0' && s[i] <= '9')
		r = (r * 10) + (n * (s[i++] - '0'));
	return (r);
}
