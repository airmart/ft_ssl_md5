/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:58:49 by mdmytro           #+#    #+#             */
/*   Updated: 2018/05/26 13:58:50 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrev(void *dst, size_t n)
{
	unsigned char	tmp;
	unsigned char	*ptr;
	size_t			i;

	if (!n)
		return (dst);
	ptr = (unsigned char *)dst;
	i = -1;
	while (--n > ++i)
	{
		tmp = ptr[i];
		ptr[i] = ptr[n];
		ptr[n] = tmp;
	}
	return (dst);
}
