/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:43:39 by mdmytro           #+#    #+#             */
/*   Updated: 2017/11/03 16:43:40 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new_obj;

	if (!(new_obj = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(new_obj, size + 1);
	return (new_obj);
}
