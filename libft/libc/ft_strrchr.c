/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:17:06 by mdmytro           #+#    #+#             */
/*   Updated: 2017/10/31 15:17:12 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;
	char ch;

	tmp = NULL;
	ch = c;
	while (*s)
		if (*s++ == ch)
			tmp = (char *)(s - 1);
	if (*s == ch)
		return ((char *)s);
	return (tmp);
}
