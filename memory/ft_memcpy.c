/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:43:29 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 12:01:03 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(char *dst, char *src, size_t l)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = -1;
	while (++i < l)
		dst[i] = src[i];
	return (dst);
}
