/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:52:19 by akratavi          #+#    #+#             */
/*   Updated: 2017/12/07 19:22:52 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	static t_line	*next = NULL;
	char			*tmp;
	char			buff[BUFF_SIZE];
	size_t			i;
	int				check;

	if (fd < 0 || fd == 1 || fd == 2 || !line)
		return (-1);

	ft_putendl("FD CHECKED");

	if (*line)
		ft_strdel(line);
	if (!(*line = ft_strnew(BUFF_SIZE)))
			return (-1);

	ft_putendl("LINE CREATED OR CLEARED");

	if (!next)
	{
		if (!(next = (t_line*)ft_memalloc(sizeof(t_line))))
			return (-1);
		next->line = NULL;
		next->fd = fd;

		ft_putendl("STATIC SET");
	}
	else if (next->fd != fd && next->line)
	{
		ft_strdel(&next->line);
		next->fd = fd;

		ft_putendl("STATIC CLEARED");
	}
	else
	{
		tmp = next->line;
		i = 0;
		while (tmp[i] != '\n' && i < ft_strlen(tmp))
			i++;
		*line = ft_strncpy(*line, tmp, i);

		ft_putendl("SAVED LINE RECOVERED");

		if (i < ft_strlen(tmp) && tmp[i] == '\n')
		{
			if (!(next->line = ft_strnew(BUFF_SIZE)))
				return (-1);
			next->line = ft_strcpy(next->line, &tmp[i + 1]);
			ft_strdel(&tmp);
			return (1);
		}
		ft_strdel(&tmp);
	}

	while ((check = read(fd, buff, BUFF_SIZE)) && check != -1)
	{
		i = 0;
		while (buff[i] != '\n' && (int)i < check)
			i++;
		if (!(tmp = ft_strnew(ft_strlen(*line) + i + 2)))
			return (-1);
		tmp = ft_strcpy(tmp, *line);
		tmp = ft_strncat(tmp, buff, i);
		ft_strdel(line);
		*line = tmp;

		ft_putendl("BUFF COPIED");

		if (i < BUFF_SIZE && buff[i] == '\n')
		{
			if (!(next->line = ft_strnew(BUFF_SIZE)))
				return (-1);
			i += 1;
			next->line = ft_strncpy(next->line, &buff[i], BUFF_SIZE - i);

			ft_putendl("NEXT LINE SAVED");

			return (1);
		}
		ft_bzero(buff, BUFF_SIZE);
	}
/*
	ft_putendl("CLEARING BEFORE LEAVING");

	if (*line)
		ft_strdel(line);

	ft_putendl("LINE CLEARED");

	if (next)
	{
		if (next->line)
			ft_strdel(&next->line);

		ft_putendl("NEXT LINE DELETED");

		ft_memdel((void**)&next);

		ft_putendl("STATIC DELETED");
	}
*/
	return (check);
}
