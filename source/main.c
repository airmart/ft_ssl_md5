/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:48:52 by mdmytro           #+#    #+#             */
/*   Updated: 2018/08/27 14:50:02 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

int		main(int argc, char **argv)
{
	ssl_init(argv);
	if (argc == 1)
		ssl_interactive_read();
	else
		ssl_parser(BASE_MOD);
	return (g_ssl.err_flag);
}
