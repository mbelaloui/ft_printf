/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 00:31:04 by mbelalou          #+#    #+#             */
/*   Updated: 2018/02/05 10:20:16 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft.h"
# define BUFF_SIZE		4096
# define MAXFD			4864

int						get_next_line(const int fd, char **line);

typedef	struct			s_list_fd
{
	int					fd;
	char				*rest;
	struct s_list_fd	*next;
}						t_list_fd;

#endif
