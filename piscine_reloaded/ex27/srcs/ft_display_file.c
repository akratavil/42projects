/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:17:49 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/07 12:43:59 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_display_file.h"

void	ft_display_file(char *fname)
{
	int		fd;
	int		rd_len;
	char	buff[10];

	fd = open(fname, O_RDONLY);
	while ((rd_len = read(fd, buff, 10)) && rd_len != -1)
		write(1, buff, rd_len);
}
