/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:26:43 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 10:58:53 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_memchr2(unsigned char *s, unsigned char c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i] != c)
		i++;
	if (i == n)
		return (0);
	return (s + i);
}

void	*ft_memchr(void *s, int c, size_t n)
{
	return (ft_memchr2(s, c, n));
}
