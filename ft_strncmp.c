/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:10:56 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 15:25:01 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *a, char *b, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (a[i] && a[i] == b[i] && i + 1 < n)
		i++;
	return (((unsigned char *)a)[i] - ((unsigned char *)b)[i]);
}
