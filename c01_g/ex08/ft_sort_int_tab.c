/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:10:34 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/18 11:16:10 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_tab(int *tab, int size)
{
	int	*ptr;

	ptr = tab;
	tab++;
	while (size - 1 > 0)
	{
		if (*ptr > *tab)
			return (1);
		ptr++;
		tab++;
		size--;
	}
	return (0);
}

int	selection_sort(int *tab, int size)
{
	int	size_1;
	int	g;
	int	posix;

	g = -2147483648;
	size_1 = 0;
	while (size_1 < size)
	{
		if (g < tab[size_1])
		{
			g = tab[size_1];
			posix = size_1;
		}
		size_1++;
	}
	size--;
	tab[posix] = tab[size];
	tab[size] = g;
	return (size);
}

void	ft_sort_int_tab(int *tab, int size)
{
	while (check_tab(tab, size))
	{
		while (size - 1 > 0)
		{
			size = selection_sort(tab, size);
		}
	}
	return ;
}

#include <stdio.h>
int main()
{
	int tab[] = {1, 4, 5, 3, 8 ,9 , 91, 12, 33};
	ft_sort_int_tab(tab, 6);
	for (int i = 0; i < 9; i++)
		printf("%d\n", tab[i]);
	return 0;
}