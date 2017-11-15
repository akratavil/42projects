/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:04:45 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/14 19:24:18 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		main(int argc, char **argv)
{
	t_list	**input;

	if (argc != 2)
		ft_putendl(USAGE);
	else
		(input = ft_get_input(av[1]) ? ft_fillit(input) : ft_putendl(ERROR));
	return (0);
}
