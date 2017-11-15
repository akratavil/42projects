/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:27:57 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/15 15:50:38 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static t_list	*stock_buff(char *buff, t_list *lst_tmp)
{
}

static char		*creat_line(char *buff, size_t i, char **line, t_list *lst_tmp)
{
}

static int		start_check_up(int const fd, char *nxt_line, t_list *lst_tmp)
{
	if (fd < 0 || fd == 1 || fd == 2)
		return (-1);
	if (ft_strlen(nxt_line))
	{
		if (!(rd_tmp = stock_buff(nxt_line, lst_tmp)))
			return (-1);
	}
	return (0);
}

static int		check_buff(char *buff, char *nxt_line, char **line,
							t_list *lst_tmp)
{
	size_t			i;

	i = 0;
	while (buff[i] != '\n' && buff[i] != '\0' && i < BUFF_SIZE)
		i++;
	if (i != BUFF_SIZE)
	{
		if (!(line = create_line(buff, i, line, lst_tmp)))
			return (-1);
	}
	else
	{
		if (!(lst_tmp = stock_buff(buff, lst_tmp)))
			return (-1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	t_list			*lst_tmp;
	int				check;
	char			buff[BUFF_SIZE];
	static char		nxt_line[BUFF_SIZE] = "";

	lst_tmp = NULL;
	if (start_check_up(fd, nxt_line, lst_tmp))
		return (-1);
	while ((check = read(fd, buff, BUFF_SIZE)) && check != -1)
	{
		if (check != -1)
		{
			if (check_buff(buff, nxt_line, line, lst_tmp))
				return (-1);
			if (!(lst_tmp))
				break ;
		}
	}
	if (check == -1)
		return (-1);
	return (check == 0 ? 0 : 1);
}
