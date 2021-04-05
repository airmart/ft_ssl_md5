/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:38:55 by mdmytro           #+#    #+#             */
/*   Updated: 2017/11/08 13:39:04 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *l;
	t_list *new_obj;

	new_obj = f(lst);
	l = new_obj;
	while (lst->next)
	{
		l->next = f(lst->next);
		l = l->next;
		lst = lst->next;
	}
	return (new_obj);
}
