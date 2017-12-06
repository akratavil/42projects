/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 16:14:24 by akratavi          #+#    #+#             */
/*   Updated: 2017/12/06 20:08:24 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "get_next_line.h"

static int		copy_buff(char *buff, char **line)
{
	char			*tmp;
	size_t			i;

	i = 0;
	while (i < BUFF_SIZE && buff[i] != '\n' && buff[i] != '\0')
		i++;
	if (!(tmp = ft_strnew(ft_strlen(*line) + i + 2)))
		return (-1);
	tmp = ft_strcpy(tmp, *line);
	tmp = ft_strncat(tmp, buff, i);
	free(*line);
	*line = tmp;
	if (i + 1 < BUFF_SIZE && buff[i] == '\n' && buff[i] != '\0')
		return (1);
	return (0);
}

static t_line	**save_next_line(int const fd, char *buff, t_line **next_line)
{
	size_t			i;
	t_line			*new;
	t_line			*lst_ptr;

	i = 0;
	if (!(new = (t_line*)malloc(sizeof(t_line))))
		return (next_line);
	while (buff[i] != '\n')
		i++;
	if (!(new->line = ft_strnew(BUFF_SIZE - i - 1)))
	{
		ft_memdel((void**)&new);
		return (next_line);
	}
	new->line = ft_strncpy(new->line, &buff[i], BUFF_SIZE - i - 1);
	new->fd = fd;
	new->next = NULL;
	if (!*next_line)
	{
		*next_line = new;
		return (next_line);
	}
	lst_ptr = *next_line;
	while (lst_ptr->next != NULL)
		lst_ptr = lst_ptr->next;
	lst_ptr->next = new;
	return (next_line);
}

static int		check_next_line(int const fd, char **line, t_line **next_line)
{
	int				check;
	t_line			*lst_ptr;
	t_line			*lst_prv;

	check = 0;
	lst_ptr = *next_line;
	lst_prv = NULL;
	while (lst_ptr != NULL && lst_ptr->fd != fd)
	{
		ft_putendl("SEARCHING");
		lst_prv = lst_ptr;
		lst_ptr = lst_ptr->next;
	}
	if (lst_ptr)
	{
		check = copy_buff(lst_ptr->line, line);
		ft_putendl("NEXT LINE COPIED");
		if (lst_prv)
			lst_prv->next = lst_ptr->next;
		if (check == 1)
		{
			next_line = save_next_line(fd, lst_ptr->line, next_line);
			ft_putendl("NEXT LINE SAVED");
		}
		free(lst_ptr->line);
		free(lst_ptr);
		ft_putendl("OLD NODE FREED");
	}
	return (check);
}

int				get_next_line(int const fd, char **line)
{
	char			buff[BUFF_SIZE];
	int				check;
	int				i;
	static t_line	**next_line = NULL;

	if (fd < 0 || fd == 1 || fd == 2 || !line)
		return (-1);
	ft_putendl("FILE DESCRIPTOR CHECKED");
	if (!(*line = ft_strnew(0)))
		return (-1);
	ft_putendl("VARIABLE \"line\" CLEARED");
	if (!next_line)
		if (!(next_line = (t_line**)ft_memalloc(sizeof(t_line*))))
			return (-1);
	ft_putendl("CHAINED LIST IS SET");
	if (*next_line)
		if ((check = check_next_line(fd, line, next_line)))
			return (check);
	ft_putendl("SAVED NEXT LINES CHECKED");
	while ((check = read(fd, buff, BUFF_SIZE)) && check != -1)
	{
		if (check == -1)
			return (-1);
		ft_putendl("BUFF CONTAINS: ");
		i = 0;
		while (i < BUFF_SIZE)
		{
			ft_putchar(buff[i]);
			i++;
		}
		ft_putchar('\n');
		check = copy_buff(buff, line);
		ft_putendl("LINE CONTAINS: ");
		ft_putendl(*line);
		if (check)
		{
			if (check == 1)
			{
				next_line = save_next_line(fd, buff, next_line);
				ft_putendl("NEXT LINE SAVED");
			}
			return (check);
		}
		ft_bzero(buff, BUFF_SIZE);
	}
	return (0);
}
