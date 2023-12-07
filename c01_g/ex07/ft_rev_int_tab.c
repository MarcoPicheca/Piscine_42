/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:58:44 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/18 10:58:09 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	ptr_tmp;
	int	*ptr;

	ptr = tab;
	tmp = size;
	while (size - 1 > 0 && ptr)
	{
		ptr++;
		size--;
	}
	while (size - 1 < (tmp / 2))
	{
		ptr_tmp = *tab;
		*tab = *ptr;
		*ptr = ptr_tmp;
		tab++;
		ptr--;
		size++;
	}
}