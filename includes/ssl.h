/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdmytro<marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:47:22 by mdmytro           #+#    #+#             */
/*   Updated: 2018/08/27 14:48:42 by mdmytro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SSL_H
# define SSL_H

/*
************************************ Includes **********************************
*/

# include "libft.h"
# include <sys/stat.h>

/*
************************************ Macroses **********************************
*/

# define ROTLEFT32(a,b) (((a) << (b)) | ((a) >> (32-(b))))
# define ROTRIGHT32(a,b) (((a) >> (b)) | ((a) << (32-(b))))
# define ROTRIGHT64(a,b) (((a) >> (b)) | ((a) << (64-(b))))

/*
************************************ Messages **********************************
*/

# define MALLOC_ERR		"malloc failed"
# define READ_ERR		"read failed"

# define SSL_CH			"ft_ssl"
# define SEPARATE_CH	": "

# define SSL_CURSOR		"ft_ssl> "
# define EXIT_CMD		"exit"

/*
************************************ Data **************************************
*/

extern struct s_ssl		g_ssl;

# define SSL_BUF_SIZE	4096
# define SSL_CMD_SIZE	7

typedef enum			e_mod
{
	BASE_MOD,
	INTERACTIVE_MOD,
	P_MOD,
	S_MOD,
	FILE_MOD
}						t_mod;

typedef enum			e_flags
{
	SSL_FLAG_P,
	SSL_FLAG_Q,
	SSL_FLAG_R,
	SSL_FLAG_S,
	SSL_FLAG_SIZE
}						t_flags;

typedef struct			s_ssl
{
	t_mod				curent;
	int					type;
	char				f[SSL_FLAG_SIZE];
	char				file_name[FILENAME_MAX + 1];
	char				*s;
	uint32_t			i;
	char				err_flag;
	char				**argv;
	char				*tmp;
	uint8_t				*res_hash_str;
	size_t				size;
}						t_ssl;

/*
******************************* Functions **************************************
*/

void					ssl_init(char **argv);
void					ssl_read_from_file(int fd, char *file_name);
void					ssl_read_from_stdin(void);
void					ssl_read(int fd, const size_t size);
void					ssl_refresh(void);
void					ssl_del(void);
void					ssl_fatal_error(const char *message);
void					ssl_print_hash(void);
void					ssl_print_hash_flags_usage(const char *cmd);
void					ssl_print_error_message(const char *cmd);
void					ssl_print_usage_exit(const char *cmd);
void					ssl_interactive_read(void);
void					ssl_parser(t_mod mod);
char					*ssl_error_str(const char *file_name);

void					ssl_md5(void);
void					ssl_sha224(void);
void					ssl_sha256(void);
void					ssl_sha384(void);
void					ssl_sha512(void);
void					ssl_sha512_224(void);
void					ssl_sha512_256(void);

int						ssl_flag_p(void);
int						ssl_flag_q(void);
int						ssl_flag_r(void);
int						ssl_flag_s(void);

/*
******************************** Const Declaration *****************************
*/

/*
** Hash Functions
*/

static const char			*g_string_hash[SSL_CMD_SIZE] =
{
	"md5", "sha224", "sha256", "sha384",
	"sha512", "sha512/224", "sha512/256"
};

typedef void	(*t_func_cmd)(void);
static const t_func_cmd	g_hash_func[SSL_CMD_SIZE] =
{
	ssl_md5, ssl_sha224, ssl_sha256, ssl_sha384,
	ssl_sha512, ssl_sha512_224, ssl_sha512_256
};

/*
** Hash Flags Functions
*/

static const char			g_hash_flags[SSL_FLAG_SIZE] =
{
	'p', 'q', 'r', 's'
};

typedef int	(*t_func_flag)(void);
static const t_func_flag	g_hash_flags_func[SSL_FLAG_SIZE] =
{
	ssl_flag_p, ssl_flag_q, ssl_flag_r, ssl_flag_s
};

#endif
