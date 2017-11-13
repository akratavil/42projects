/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:20:45 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/13 14:46:27 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	cat_size;

	if (ft_strlen(dst) >= size)
		cat_size = size + ft_strlen(src);
	else
		cat_size = ft_strlen(dst) + ft_strlen(src);
	if (size > ft_strlen(dst))
		dst = ft_strncat(dst, src, size - ft_strlen(dst) - 1);
	return (cat_size);
}
