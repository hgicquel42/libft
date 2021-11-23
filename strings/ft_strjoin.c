/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:04:08 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 17:10:05 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *a, char *b)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (!a || !b)
		return (0);
	r = malloc(ft_strlen(a) + ft_strlen(b) + 1);
	if (!r)
		return (0);
	i = 0;
	j = 0;
	while (a[j])
		r[i++] = a[j++];
	j = 0;
	while (b[j])
		r[i++] = b[j++];
	r[i] = 0;
	return (r);
}
