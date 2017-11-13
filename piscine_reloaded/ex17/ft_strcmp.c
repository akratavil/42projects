/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:42:49 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/06 15:46:18 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	else if ((*s1 != *s2) || (!*s1 && *s2) || (*s1 && !*s2))
		return (*s1 - *s2);
	else
		return (ft_strcmp(++s1, ++s2));
}
