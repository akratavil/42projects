/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:26:14 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 10:13:08 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	if (!*s1 && !*s2)
		return (0);
	else if ((*s1 != *s2) || (!*s1 && *s2) || (*s1 && !*s2))
		return (*((unsigned char*)s1) - *((unsigned char*)s2));
	else
		return (ft_strcmp(++s1, ++s2));
}
