/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:51:54 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/28 15:41:33 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (b[i] == '\0' || b[i + 1] == '\0')
		return (1);
	while (b[i] != '\0')
	{
		j = i + 1;
		if (b[i] == '-' || b[i] == '+')
			return (1);
		while (b[j])
		{
			if (b[i] == b[j])
				return (1);
			j++;
		}
		i++;
	}
	if (j != 2 && j != 8 && j != 10 && j != 16)
		return (1);
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	j;

	j = check_base(base);
	if (j == 1)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		write(1, base + 2, 1);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= j)
	{
		ft_putnbr_base(nbr / j, base);
		nbr = nbr % j;
	}
	if (nbr < j)
		write(1, base + nbr, 1);
}

#include <stdio.h>

int main()
{
	int	i =  -2147483648; 
	ft_putnbr_base(i, "01");
}
