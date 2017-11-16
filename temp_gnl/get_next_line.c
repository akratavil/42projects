/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:27:57 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/16 18:26:07 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"

static size_t	check_buff(char *buff, size_t size)
{
	size_t			i;

	i = 0;
	while (i < size && buff[i] != '\n' && buff[i] != '\0')
		i++;
	if (i != size)
		return (i);
	else
		return (0);
}

static int		stock_buff(char *buff, size_t size, char **line)
{
	char			*tmp_line;
	char			*tmp_buff;

	if (size)
	{
		if (!(tmp_buff = ft_strnew(size)))
			return (-1);
		tmp_buff = ft_strncpy(tmp_buff, buff, size);
		if (!(tmp_line = ft_strjoin(*line, tmp_buff)))
			return (-1);
		free(tmp_buff);
		tmp_buff = NULL;
	}
	else
	{
		if (!(tmp_line = ft_strjoin(*line, buff)))
			return (-1);
	}
	free(*line);
	*line = tmp;
	return (0);
}

static int		check_next_line(int const fd, char **line, t_list **next_line)
{
	char			*next_line;
	t_list			*list_ptr;
	t_list			*list_prev;

	list_ptr = *next_line;
	while (list_ptr && list_ptr->content->fd != fd)
	{
		list_prev = list_ptr;
		list_ptr = list_ptr->next;
	}
	if (list_ptr)
	{
		next_line = list_ptr->content->next_line;
		if (stock_buff(next_line, ft_strlen(next_line) + 1, line))
			return (-1);
		list_prev->next = list_ptr->next;
		free(list_ptr->content->next_line);
		free(list_ptr->content);
		free(list_ptr);
	}
	return (0);
}

static int		start_check(int const fd, char **line)
{
	if (fd < 0 || fd == 1 || fd == 2 || !line)
		return (-1);
	if (*line)
	{
		free(*line);
		*line = NULL;
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	char			buff[BUFF_SIZE];
	size_t			i;
	int				check;
	static t_list	**next_line = NULL;

	if (start_check(fd, line, next_line))
		return (-1);
	if (next_line)
	{
		if (check_next_line(fd, line, next_line))
			return (-1);
	}
	while (check = read(fd, buff, BUFF_SIZE) && check != -1)
	{
		if (check == -1)
			return (-1);
	}
	return (check);
}
