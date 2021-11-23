/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:06:53 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 14:27:16 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_unsafe_memcpy1(char *dst, char *src, size_t l)
{
	size_t	i;

	i = -1;
	while (++i < l)
		dst[i] = src[i];
	return (dst);
}

static	void	*ft_unsafe_memcpy2(char *dst, char *src, size_t l)
{
	while (l--)
		dst[l] = src[l];
	return (dst);
}

void	*ft_memmove(char *dst, char *src, size_t l)
{
	if (!dst && !src)
		return (0);
	if (dst > src)
		return (ft_unsafe_memcpy2(dst, src, l));
	else
		return (ft_unsafe_memcpy1(dst, src, l));
}
