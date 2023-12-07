/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:21:33 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/14 15:24:16 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int a)
{
	char	*digit;

	digit = "0123456789";
	write (1, digit + a, 1);
}

void	print_numbers(int a, int b, int c)
{
	print_int(a);
	print_int(b);
	print_int(c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_numbers(a, b, c);
				if (a == 7 && b == 8 && c == 9)
					return ;
				write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
