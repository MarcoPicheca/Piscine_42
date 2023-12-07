/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:05:11 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/19 13:38:37 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int i)
{
	char	*digit;

	digit = "0123456789abcdef";
	write(1, digit + i, 1);
}

void	nbr_printable(char c)
{
	int		i;
	char	null;

	null = '\0';
	i = 0;
	while (null != c)
	{
		i++;
		null++;
	}
	if (i > 15)
		i -= 16;
	print_hex(i);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 127)
			write(1, "\\7f", 3);
		else if (str[i] >= 32)
			write(1, &str[i], 1);
		else if (str[i] >= 0 && str[i] <= 15)
		{
			write(1, "\\0", 2);
			nbr_printable(str[i]);
		}
		else if (str[i] >= 16 && str[i] <= 31)
		{
			write(1, "\\1", 2);
			nbr_printable(str[i]);
		}
		i++;
	}
	if (str[i] == '\0')
		write(1, "\\00", 2);
}
