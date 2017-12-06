/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:07:28 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/08 14:12:47 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	void const	*ptr;

	ptr = s;
	while (n > 0)
	{
		if (*((unsigned char*)ptr) == (unsigned char)c)
			return ((void*)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
