/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:12:20 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/06 14:19:07 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		ft_putchar(c + i);
		i++;
	}
}
