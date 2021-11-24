/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:26:32 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 12:06:08 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_strlen(char *s);

char	*ft_strchr(char *s, int c);

char	*ft_strrchr(char *s, int c);

int		ft_strncmp(char *a, char *b, size_t n);

void	ft_bzero(void *p, size_t l);

void	*ft_memset(void *b, int c, size_t l);

void	*ft_memcpy(void *dst, void *src, size_t l);

void	*ft_memmove(void *dst, void *src, size_t l);

void	*ft_memchr(void *s, int c, size_t n);

int		ft_memcmp(void *a, void *b, size_t n);

size_t	ft_strlcpy(char *dst, char *src, size_t l);

size_t	ft_strlcat(char *dst, char *src, size_t l);

char	*ft_strnstr(char *haystack, char *needle, size_t l);

int		ft_atoi(char *s);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(char *src);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char *a, char *b);

char	*ft_strtrim(char *s, char *set);

char	**ft_split(char *s, char c);

#endif
