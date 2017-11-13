/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:25:55 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/07 12:45:42 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int ac, char **av)
{
	if (ac < 2)
		ft_puterrmsg(ERR_MISS);
	else if (ac > 2)
		ft_puterrmsg(ERR_MANY);
	else
		ft_display_file(av[1]);
	return (0);
}
