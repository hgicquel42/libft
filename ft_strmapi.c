/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:22:25 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 14:28:22 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*r;

	i = 0;
	while (s[i])
		i++;
	r = malloc(i + 1);
	if (!r)
		return (0);
	i = -1;
	while (s[++i])
		r[i] = f(i, s[i]);
	r[i] = 0;
	return (r);
}
