/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:37:46 by mdmytro           #+#    #+#             */
/*   Updated: 2017/11/08 13:40:38 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while (*alst)
	{
		tmp = *alst;
		del((*alst)->content, (*alst)->content_size);
		*alst = (*alst)->next;
		free(tmp);
	}
}

void	ft_lst2del_by_obj(t_list2 **start, t_list2 **end,
			t_list2 *obj, void (*del)(void *, size_t))
{
	if (!obj->prev)
	{
		*start = (*start)->next;
		if (*start)
			(*start)->prev = NULL;
		else
			*end = NULL;
	}
	else if (!obj->next)
	{
		obj->prev->next = NULL;
		*end = obj->prev;
	}
	else
	{
		obj->prev->next = obj->next;
		obj->next->prev = obj->prev;
	}
	del(obj->content, obj->content_size);
	free(obj);
}

void	ft_lst2del(t_list2 **start, t_list2 **end,
			void (*del)(void *, size_t))
{
	t_list2	*tmp;

	while (*start)
	{
		tmp = *start;
		del((*start)->content, (*start)->content_size);
		*start = (*start)->next;
		free(tmp);
	}
	*end = NULL;
}
