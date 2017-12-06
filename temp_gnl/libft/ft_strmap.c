/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:19:45 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/13 15:43:09 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(dst = ft_strnew(len)))
		return (NULL);
	dst = ft_strcpy(dst, s);
	while (i < len)
	{
		dst[i] = f(dst[i]);
		i++;
	}
	return (dst);
}
