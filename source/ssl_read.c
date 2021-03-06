/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 09:14:37 by mdmytro           #+#    #+#             */
/*   Updated: 2018/09/01 09:14:38 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

void		ssl_read(int fd, const size_t size)
{
	char	*buf;
	int		i;

	buf = NULL;
	if (!(g_ssl.s = ft_memalloc(1))
		|| !(buf = (char *)malloc(sizeof(char) * size + 1)))
		ssl_fatal_error(MALLOC_ERR);
	g_ssl.size = 0;
	while ((i = read(fd, buf, size)) > 0)
	{
		buf[i] = 0;
		if (!(g_ssl.s = ft_memjoin_free((void **)&g_ssl.s, buf, g_ssl.size, i)))
			ssl_fatal_error(MALLOC_ERR);
		g_ssl.size += i;
	}
	free(buf);
	if (i == -1)
		ssl_fatal_error(READ_ERR);
}

void		ssl_read_from_stdin(void)
{
	ssl_read(0, SSL_BUF_SIZE);
	g_hash_func[g_ssl.type]();
	ssl_print_hash();
	ssl_del();
}

void		ssl_read_from_file(int fd, char *file_name)
{
	struct stat buff;

	stat(file_name, &buff);
	g_ssl.curent = FILE_MOD;
	ft_strcpy(g_ssl.file_name, file_name);
	ssl_read(fd, buff.st_size);
	close(fd);
	g_hash_func[g_ssl.type]();
	ssl_print_hash();
	ssl_del();
}
