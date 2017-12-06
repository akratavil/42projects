/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:21:47 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 13:21:48 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	size_t	i;
	char	*ptr;

	if (ft_strlen(s) == 0)
		return (((char)c == 0) ? (ptr = (char*)s) : NULL);
	if ((char)c == 0)
		return (ptr = (char*)&s[ft_strlen(s)]);
	i = ft_strlen(s) - 1;
	while (i != 0 && s[i] != (char)c)
		i--;
	return ((s[i] == (char)c) ? (ptr = (char*)&s[i]) : NULL);
}
