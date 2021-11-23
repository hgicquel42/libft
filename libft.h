/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:26:32 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 16:41:46 by hgicquel         ###   ########.fr       */
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

void	ft_bzero(char *p, size_t l);

void	*ft_memset(char *b, char c, size_t l);

void	*ft_memcpy(char *dst, char *src, size_t l);

void	*ft_memmove(char *dst, char *src, size_t l);

void	*ft_memchr(unsigned char *s, int c, size_t n);

int		ft_memcmp(unsigned char *a, unsigned char *b, size_t n);

size_t	ft_strlcpy(char *dst, char *src, size_t l);

size_t	ft_strlcat(char *dst, char *src, size_t l);

char	*ft_strnstr(char *haystack, char *needle, size_t l);

int		ft_atoi(char *s);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(char *src);

#endif
