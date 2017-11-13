/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:19:33 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 13:55:05 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	size;

	dst = NULL;
	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2) + 1;
		if (!(dst = ft_strnew(size)))
			return (NULL);
		dst = ft_strcpy(dst, s1);
		dst = ft_strcat(dst, s2);
	}
	return (dst);
}
