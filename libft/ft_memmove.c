/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:29:16 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 10:27:44 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	void	*tmp;

	if (!(tmp = ft_memalloc(len)))
		return (dst);
	tmp = ft_memcpy(tmp, src, len);
	dst = ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
