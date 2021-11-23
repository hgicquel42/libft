/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:34:07 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 14:11:27 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t l)
{
	size_t	i;

	i = 0;
	while (l && i < (l-1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (l)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}