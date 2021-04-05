/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:28:28 by mdmytro           #+#    #+#             */
/*   Updated: 2017/10/30 14:28:38 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned char	ch;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	ch = (unsigned char)c;
	while (n--)
		if ((*ptr1++ = *ptr2++) == ch)
			return (ptr1);
	return (NULL);
}
