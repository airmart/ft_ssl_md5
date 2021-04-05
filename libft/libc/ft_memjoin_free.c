/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:59:59 by mdmytro           #+#    #+#             */
/*   Updated: 2018/08/25 13:00:00 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memjoin_free(void **dst, const void *src,
			size_t dstsize, size_t srcsize)
{
	void			*tmp;

	tmp = *dst;
	if (!(*dst = (char *)malloc(sizeof(char) * (dstsize + srcsize))))
		return (NULL);
	ft_memcpy(*dst, tmp, dstsize);
	ft_memcpy(&(*dst)[dstsize], src, srcsize);
	free(tmp);
	return (*dst);
}
