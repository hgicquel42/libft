/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:10:38 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 17:13:32 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s, char *set)
{
	size_t		l;
	char		*r;

	if (!s || !set)
		return (0);
	while (*s && ft_strchr(set, *s))
		s++;
	l = ft_strlen(s);
	while (l && ft_strchr(set, s[l]))
		l--;
	r = ft_substr(s, 0, l + 1);
	return (r);
}
