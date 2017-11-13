/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:44:00 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/13 12:26:06 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*new;
	char const	*src;

	new = NULL;
	src = NULL;
	if (s)
	{
		src = &s[start];
		if (!(new = ft_strnew(len)))
			return (NULL);
		new = ft_strncpy(new, src, len);
		new[len] = '\0';
	}
	return (new);
}
