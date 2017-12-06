/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:05:58 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/08 13:08:42 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	void	*tmp;

	tmp = dst;
	while (n > 0)
	{
		*((unsigned char*)tmp++) = *((unsigned char*)src++);
		n--;
	}
	return (dst);
}
