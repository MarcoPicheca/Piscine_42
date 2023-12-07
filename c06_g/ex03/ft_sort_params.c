/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:54:04 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/28 12:34:59 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**sort_param(char **av, int ac)
{
	char	*buf;
	int		i;

	i = 1;
	while (i < ac)
	{
		while (i < (ac - 1))
		{
			buf = av[i + 1];
			if (ft_strcmp(av[i], buf) > 0)
			{
				buf = av[i];
				av[i] = av[i + 1];
				av[i + 1] = buf;
			}
			i++;
		}
		i = 1;
		ac--;
	}
	return (av);
}

int	main(int ac, char **av)
{
	char	**sort;
	int		i;

	i = 1;
	sort = sort_param(av, ac);
	while (sort[i])
	{
		ft_putstr(sort[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
