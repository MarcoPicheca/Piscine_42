/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:42:16 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/24 11:38:58 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;
	int	n2;
	int	tmp;

	if (index < 0)
		return (-1);
	n2 = 1;
	n = n2 - 1;
	while (0 < index)
	{
		tmp = n2;
		n2 += n;
		n = tmp;
		if (0 < index)
			ft_fibonacci(--index);
	}
	return (n);
}
/*
#include <stdio.h>

int main()
{
	int i = 5;
	printf("%d\n", ft_fibonacci(i));
	return(0);
}*/
