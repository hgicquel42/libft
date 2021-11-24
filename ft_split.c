/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:18:42 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 17:21:21 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_include(char	*str, int l, char c)
{
	int	i;

	i = 0;
	while (i < l && str[i] != c)
		i++;
	if (i == l)
		return (0);
	return (1);
}

static	int	ft_count(char *str, char *charset, int l)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (str[i])
	{
		while (str[i] && ft_include(charset, l, str[i]))
			i++;
		j = 0;
		while (str[i + j] && !ft_include(charset, l, str[i + j]))
			j++;
		if (j)
			s++;
		i += j;
	}
	return (s);
}

static	void	ft_alloc(char **strs, char *str, char *charset, int l)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (str[i])
	{
		while (str[i] && ft_include(charset, l, str[i]))
			i++;
		j = 0;
		while (str[i + j] && !ft_include(charset, l, str[i + j]))
			j++;
		if (j)
			strs[s++] = malloc((j + 1) * sizeof(char));
		i += j;
	}
	strs[s] = 0;
}

void	ft_fill(char **strs, char *str, char *charset, int l)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (str[i])
	{
		while (str[i] && ft_include(charset, l, str[i]))
			i++;
		j = 0;
		while (str[i + j] && !ft_include(charset, l, str[i + j]))
		{
			strs[s][j] = str[i + j];
			j++;
		}
		if (j)
			strs[s++][j] = '\0';
		i += j;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		l;
	int		s;
	char	**strs;

	l = 0;
	while (charset[l])
		l++;
	s = ft_count(str, charset, l);
	strs = malloc((s + 1) * sizeof(char *));
	ft_alloc(strs, str, charset, l);
	ft_fill(strs, str, charset, l);
	return (strs);
}
