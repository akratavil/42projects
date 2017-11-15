/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:34:25 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/14 19:29:20 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fillit.h"
#include "libft.h"

t_list	**ft_get_input(char *file_name)
{
	int		fd;
	int		check_rd;
	size_t	i;
	char	buff[21];
	t_list	**input;

	input = NULL;
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (NULL);
	while ((check_rd = read(fd, buff, 21)) && check_rd != -1)
	{
		if (ft_check_pattern(buff) || ft_fill_list(input,buff))
		{
			ft_lstdel(input);
			close(fd);
			return (NULL);
		}
	}
	close(fd);
	return (input);
}

