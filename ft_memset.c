/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:36:55 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 11:02:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_memset2(unsigned char *p, unsigned char c, size_t l)
{
	while (l--)
		p[l] = c;
	return (p);
}

void	*ft_memset(void *p, int c, size_t l)
{
	return (ft_memset2(p, c, l));
}
