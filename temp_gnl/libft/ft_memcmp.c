/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:13:38 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/08 14:20:10 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char*)s1) != *((unsigned char*)s2))
			return ((int)(*((unsigned char*)s1) - *((unsigned char*)s2)));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
