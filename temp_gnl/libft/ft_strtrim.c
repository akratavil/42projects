/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:54:56 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/13 15:10:49 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strtrim(char const *s)
{
	char	*new;
	size_t	i;
	size_t	len;

	new = NULL;
	if (s)
	{
		i = 0;
		while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
			i++;
		if (!s[i])
			return (ft_strnew(0));
		len = ft_strlen(s) - 1;
		while ((s[len] == ' ') || (s[len] == '\n') || (s[len] == '\t'))
			len--;
		len = len - i + 1;
		if (!(new = ft_strsub(s, i, len)))
			return (NULL);
	}
	return (new);
}
