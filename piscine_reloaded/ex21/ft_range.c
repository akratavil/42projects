/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:26:28 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/06 16:31:19 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(range = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
