/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:51:54 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/06 16:16:46 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	else if ((*s1 != *s2) || (!*s1 && *s2) || (*s1 && !*s2))
		return (*s1 - *s2);
	else
		return (ft_strcmp(++s1, ++s2));
}

char	**ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (av);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac >= 2)
	{
		if (ac > 2)
			av = ft_sort_params(ac, av);
		while (i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
