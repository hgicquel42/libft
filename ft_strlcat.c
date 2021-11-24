/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:15:04 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 14:53:36 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < l)
		i++;
	j = -1;
	while (src[++j] && (i + j + 1) < l)
		dst[i + j] = src[j];
	if (i != l)
		dst[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}
