/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:44:03 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/27 18:49:46 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac - 1;
	while (j > 0 && ac > 1)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}