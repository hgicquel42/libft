/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:07:29 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 15:24:36 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i && (s[i] != c))
		i--;
	if (s[i] == c)
		return (s + i);
	return (0);
}
