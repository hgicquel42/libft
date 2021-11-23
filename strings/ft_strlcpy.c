/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:34:07 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 14:32:49 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t l)
{
	size_t	i;

	i = -1;
	while (src[++i] && (i + 1) < l)
		dst[i] = src[i];
	if (l)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}
