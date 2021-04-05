/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tostruppercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:13:31 by mdmytro           #+#    #+#             */
/*   Updated: 2017/11/09 16:15:20 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_to_upper(char **str)
{
	char *tmp;

	tmp = *str;
	while (*tmp)
	{
		if (ft_islower(*tmp))
			*tmp = ft_toupper(*tmp);
		++tmp;
	}
}
