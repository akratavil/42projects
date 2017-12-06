/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:11:35 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/08 13:27:34 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	void	*tmp;

	tmp = dst;
	while (n > 0)
	{
		*((unsigned char*)tmp++) = *((unsigned char*)src++);
		if (*((unsigned char*)(tmp - 1)) == (unsigned char)c)
			return (tmp);
		n--;
	}
	return (NULL);
}
