/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:39 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/28 17:38:13 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (--nb > 0)
	{
		tmp = nb * tmp;
	}
	return (tmp);
}
/*
#include <stdio.h>
int main()
{
	int c = 5;
	printf("%d\n", ft_iterative_factorial(c));
	return 0;
}*/
