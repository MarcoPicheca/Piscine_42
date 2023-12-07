/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:25:33 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/14 17:29:02 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int n)
{
	char	a;
	char	b;

	a = n / 10 + 48;
	b = n % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_digits(a);
			write(1, " ", 1);
			print_digits(b);
			if (a == 98 && b == 99)
				return ;
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
