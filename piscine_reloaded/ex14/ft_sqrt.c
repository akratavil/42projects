/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:30:15 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/06 16:18:00 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		square;

	square = 0;
	if (nb < 1)
		return (0);
	else
	{
		while (square * square <= nb && square < 46341)
		{
			square++;
			if (nb == square * square)
				return (square);
		}
	}
	return (0);
}
