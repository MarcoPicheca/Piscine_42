/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:33:09 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/29 17:52:04 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	ac = 0;
	while (av[0][ac] != '\0')
	{
		write(1, &av[0][ac], 1);
		ac++;
	}
	write(1, "\n", 1);
	return (0);
}
