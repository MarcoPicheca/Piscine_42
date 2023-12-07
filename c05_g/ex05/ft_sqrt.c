/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:44:00 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/02 17:14:21 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	num;

	if (nb <= 0)
		return (0);
	num = 1;
	while ((num * num) <= nb)
	{
		if ((num * num) == nb)
			return (num);
		num++;
	}
	return (0);
}
/*
#include <limits.h>
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(INT_MAX));
}
*/
