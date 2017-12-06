/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:32:59 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 09:36:43 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if ((char)c != 0)
	{
		while (s[i] && s[i] != (char)c)
			i++;
		if (s[i] == (char)c)
			return (ptr = (char*)&s[i]);
		else
			return (NULL);
	}
	else
		return (ptr = (char*)&s[ft_strlen(s)]);
}
