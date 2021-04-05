/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 19:18:01 by mdmytro           #+#    #+#             */
/*   Updated: 2017/10/30 19:18:03 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tmp;
	char c;

	tmp = dst;
	c = 0;
	while (len)
	{
		if (!(*tmp++ = *src++))
		{
			while (--len)
				*tmp++ = c;
			return (dst);
		}
		--len;
	}
	return (dst);
}
