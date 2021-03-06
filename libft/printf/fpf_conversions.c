/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpf_conversions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:41:21 by mdmytro           #+#    #+#             */
/*   Updated: 2018/08/25 16:41:23 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

signed long long int	fpf_conv_sig_int(t_printf *fpf)
{
	signed long long int num;

	if (fpf->size_flag == SF_HH)
		num = (signed char)va_arg(fpf->args, signed long long int);
	else if (fpf->size_flag == SF_H)
		num = (signed short)va_arg(fpf->args, signed long long int);
	else if (fpf->size_flag == SF_L)
		num = (signed long)va_arg(fpf->args, signed long long int);
	else if (fpf->size_flag == SF_LL)
		num = (signed long long)va_arg(fpf->args, signed long long int);
	else if (fpf->size_flag == SF_J)
		num = (intmax_t)va_arg(fpf->args, signed long long int);
	else if (fpf->size_flag == SF_Z)
		num = (size_t)va_arg(fpf->args, signed long long int);
	else
		num = (signed int)va_arg(fpf->args, signed long long int);
	return (num);
}

unsigned long long int	fpf_conv_unsig_int(t_printf *fpf)
{
	unsigned long long int num;

	if (fpf->size_flag == SF_HH)
		num = (unsigned char)va_arg(fpf->args, unsigned long long int);
	else if (fpf->size_flag == SF_H)
		num = (unsigned short)va_arg(fpf->args, unsigned long long int);
	else if (fpf->size_flag == SF_L)
		num = (unsigned long)va_arg(fpf->args, unsigned long long int);
	else if (fpf->size_flag == SF_LL)
		num = (unsigned long long)va_arg(fpf->args, unsigned long long int);
	else if (fpf->size_flag == SF_J)
		num = (uintmax_t)va_arg(fpf->args, unsigned long long int);
	else if (fpf->size_flag == SF_Z)
		num = (size_t)va_arg(fpf->args, unsigned long long int);
	else
		num = (unsigned int)va_arg(fpf->args, unsigned long long int);
	return (num);
}
