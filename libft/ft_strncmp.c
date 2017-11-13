/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:33:42 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 10:15:39 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if ((!*s1 && !*s2) || (n == 0))
		return (0);
	else if ((*s1 != *s2) || (!*s1 && *s2) || (*s1 && !*s2))
		return (*((unsigned char*)s1) - *((unsigned char*)s2));
	else
		return (ft_strncmp(++s1, ++s2, --n));
}
