/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:22:50 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/07 12:50:20 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	if (!*tab)
		return (0);
	else if (f(*tab) == 1)
		return (1 + ft_count_if(++tab, f));
	else
		return (ft_count_if(++tab, f));
}
