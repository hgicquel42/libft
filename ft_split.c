/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:31:04 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 16:06:56 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_split_count(char *s, char c)
{
	size_t	j;
	size_t	l;

	l = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		if (j)
			l++;
		s += j;
	}
	return (l);
}

static	int	ft_split_free(char **r, size_t k)
{
	size_t	i;

	i = 0 ;
	while (i < k)
		free(r[i++]);
	free(r);
	return (0);
}

static	int	ft_split_alloc(char *s, char c, char **r)
{
	size_t	j;
	size_t	k;
	char	*w;

	k = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		if (!j)
			continue ;
		w = malloc(j + 1);
		if (!w)
			return (ft_split_free(r, k));
		j = 0;
		while (*s && *s != c)
			w[j++] = *(s++);
		w[j] = 0;
		r[k++] = w;
	}
	return (1);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	**r;

	i = 0;
	j = 0;
	l = ft_split_count(s, c);
	r = malloc((l + 1) * sizeof(char *));
	if (!r)
		return (0);
	if (!ft_split_alloc(s, c, r))
		return (0);
	r[l] = 0;
	return (r);
}
