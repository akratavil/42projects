/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:32:39 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/06 14:35:39 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		fact_nb;

	fact_nb = nb;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (nb > 1)
		{
			fact_nb = fact_nb * (nb - 1);
			nb--;
		}
	}
	return (fact_nb);
}
