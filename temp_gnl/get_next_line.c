/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:52:19 by akratavi          #+#    #+#             */
/*   Updated: 2017/12/08 18:55:13 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "get_next_line.h"

static char		**read_file(int const fd)
{
	char			**tab;
	char			*tmp;
	char			*dst;
	char			buff[BUFF_SIZE];
	int				check;

	tmp = NULL;
	dst = ft_strnew(0);
	while ((check = read(fd, buff, BUFF_SIZE)) && check != -1)
	{
		if (!(tmp = ft_strnew(ft_strlen(dst) + check + 1)))
			return (NULL);
		tmp = ft_strcpy(tmp, dst);
		tmp = ft_strncat(tmp, buff, check);
		if (dst)
			free(dst);
		dst = tmp;
	}
	tab = ft_strsplit(dst, '\n');
	free(dst);
	dst = NULL;
	return (tab);
}

int		get_next_line(int const fd, char **line)
{
	static t_line	*next = NULL;
	char			*tmp;

	if (fd < 0 || fd == 1 || fd == 2 || !line)
		return (-1);
	if (!next)
	{
		if (!(next = (t_line*)ft_memalloc(sizeof(t_line))))
			return (-1);
		next->lines = read_file(fd);
		next->fd = fd;
	}
	else if (next->fd != fd && next->lines)
	{
		while (*(next->lines))
		{
			tmp = *(next->lines);
			next->lines += 1;
			ft_strdel(&tmp);
		}
		next->lines = read_file(fd);
		next->fd = fd;
	}
	*line = *(next->lines);
	next->lines += 1;
	if (*line)
		return (1);
	else
		return (0);
}
