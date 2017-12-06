/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:32:04 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/08 17:42:26 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t		i;
	char const	*ptr;

	i = 0;
	while ((haystack[i] && needle[i] && haystack[i] == needle[i]) && i < len)
		i++;
	if (!needle[i])
		return ((char*)(ptr = haystack));
	else if (!haystack[i] || len == 0)
		return (NULL);
	else
		return (ft_strnstr(++haystack, needle, --len));
}
