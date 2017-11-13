/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:08:39 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/08 16:36:09 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_str(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (!s[i])
		{
			i--;
			if (s[i] != c)
				count++;
			i++;
		}
		else
			count++;
	}
	return (count);
}

static int	ft_split_len(char const *s, char c, int start)
{
	int		len;

	len = 0;
	while (s[start] && (s[start] != c))
	{
		start++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(split = (char**)malloc(sizeof(char*) * (ft_count_str(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			split[j++] = ft_strsub(s, i, ft_split_len(s, c, i));
		while (s[i] && (s[i] != c))
			i++;
	}
	split[j] = 0;
	return (split);
}
