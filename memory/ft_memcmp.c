/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:31:44 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 15:36:42 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(unsigned char *a, unsigned char *b, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (i + 1 < n && a[i] == b[i])
		i++;
	if (a[i] == b[i])
		return (0);
	return (a[i] - b[i]);
}
