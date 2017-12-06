/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:44:49 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/07 19:27:44 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *haystack, char const *needle)
{
	int			i;
	char const	*ptr;

	i = 0;
	while (haystack[i] && needle[i] && haystack[i] == needle[i])
		i++;
	if (!needle[i])
		return ((char*)(ptr = haystack));
	else if (!haystack[i])
		return (NULL);
	else
		return (ft_strstr(++haystack, needle));
}
