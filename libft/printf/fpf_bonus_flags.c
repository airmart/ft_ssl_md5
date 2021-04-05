/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpf_bonus_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:08:18 by mdmytro           #+#    #+#             */
/*   Updated: 2018/10/04 12:08:19 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		fpf_before_processing_data(t_printf *fpf)
{
	if (fpf->f[F_COLOR])
		fpf_set_color(fpf);
	if (fpf->f[F_UPERCASE])
		ft_str_to_upper(&fpf->str);
}

void		fpf_after_processing_data(t_printf *fpf)
{
	if (fpf->f[F_COLOR])
		fpf_cat_str(fpf, COLOR_RESET);
}
