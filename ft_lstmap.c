/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:19:12 by hgicquel          #+#    #+#             */
/*   Updated: 2021/11/24 15:23:39 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;

	if (!lst)
		return (0);
	r = ft_lstnew(f(lst->content));
	if (!r)
		return (0);
	r->next = ft_lstmap(lst->next, f, del);
	del(lst);
	return (r);
}
