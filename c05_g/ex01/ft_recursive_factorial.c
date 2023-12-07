/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:39 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/29 18:02:45 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	tmp;

	tmp = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (--tmp > 0)
	{
		nb = nb * tmp;
		if (tmp > 0)
			ft_recursive_factorial(tmp);
		else
			return (nb);
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int c = 7;
	printf("%d\n", ft_recursive_factorial(c));
	return 0;
}
*/
