/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:31:04 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 12:16:39 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_neq(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

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

char	**ft_split_free(char **r, size_t k)
{
	size_t	i;

	i = 0 ;
	while (i < k)
		free(r[i++]);
	free(r);
	return (0);
}

int	ft_split_alloc(char *s, char c, char **r, size_t l)
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
		while (s[j] && s[j] == c)
			j++;
		s += j;
		if (j)
			continue ;
		w = malloc(j);
		if (!w)
			return (ft_split_free(r, k));
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
	r = malloc(l * sizeof(void *));
	if (!r)
		return (0);
	if (!ft_split_alloc(s, c, r, l))
		return (0);
	r[l] = 0;
	return (r);
}
