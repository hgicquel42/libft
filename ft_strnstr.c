/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:41:04 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 15:47:58 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t l)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return (haystack);
	i = 0;
	while (haystack[i] && i < l)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < l && needle[j] && haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
