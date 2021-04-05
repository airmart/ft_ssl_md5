/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstruppercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:58:26 by mdmytro           #+#    #+#             */
/*   Updated: 2017/11/09 15:05:05 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_upper(const char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str) && ft_islower(*str++))
			return (0);
		++str;
	}
	return (1);
}
