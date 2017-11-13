/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:11:11 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/09 13:47:36 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		return ((ft_strncmp(s1, s2, n)) ? 0 : 1);
	else if (!s1 && !s2)
		return (1);
	else
		return (0);
}
