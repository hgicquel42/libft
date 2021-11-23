/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:36:55 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 11:51:20 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(char *p, char c, size_t l)
{
	while (l--)
		((unsigned char *) p)[l] = (unsigned char) c;
	return (p);
}
