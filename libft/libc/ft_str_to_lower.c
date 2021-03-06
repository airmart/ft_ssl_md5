/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tostrlowercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:24:42 by mdmytro           #+#    #+#             */
/*   Updated: 2017/11/09 15:25:26 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_to_lower(char **str)
{
	char *tmp;

	tmp = *str;
	while (*tmp)
	{
		if (ft_isupper(*tmp))
			*tmp = ft_tolower(*tmp);
		++tmp;
	}
}
