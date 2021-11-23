/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:26:32 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/23 13:58:34 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(char *s);

void	ft_bzero(char *p, size_t l);

void	*ft_memset(char *b, char c, size_t l);

void	*ft_memcpy(char *dst, char *src, size_t l);

void	*ft_memmove(char *dst, char *src, size_t l);

size_t	ft_strlcpy(char *dst, char *src, size_t l);

#endif
