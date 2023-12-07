/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:37:41 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/29 19:43:01 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac > 1)
	{
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				pchar(av[j][i]);
				i++;
			}
			pchar('\n');
			j++;
		}
	}
	return (0);
}
