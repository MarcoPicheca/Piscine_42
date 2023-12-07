/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:07:58 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/04 14:49:12 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	tmp;

	tmp = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (nb == 0 && power > 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		tmp = tmp * nb;
		power--;
		if (power > 1)
			ft_recursive_power(nb, power);
		else
			return (tmp);
	}
	return (tmp);
}
/*
#include <stdio.h>
int main()
{
        printf("%d\n", ft_recursive_power(2, 4));
        return 0;
}
*/
