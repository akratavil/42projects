/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:17:31 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/07 16:23:41 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_create_string(int n)
{
	char	*str;
	int		len;

	len = 1;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	return (str);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i++] = str[j];
		str[j--] = tmp;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	i = 0;
	neg = 1;
	if (!(str = ft_create_string(n)))
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	if (n < 0)
		neg = -1;
	while (n != 0)
	{
		str[i++] = 48 + ((n % 10) * neg);
		n = n / 10;
	}
	if (neg == -1)
		str[i++] = '-';
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
