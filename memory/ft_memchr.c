/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:26:43 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 15:30:44 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(unsigned char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i] != (unsigned char) c)
		i++;
	if (i == n)
		return (0);
	return (s + i);
}
