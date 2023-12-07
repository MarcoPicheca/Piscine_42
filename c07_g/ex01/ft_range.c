/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:01:06 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/06 10:03:09 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <time.h>

int	*ft_range(int min, int max)
{
	int	*count;
	int	*c;
	int	range;

	range = 0;
	c = NULL;
	if (min >= max)
		return (NULL);
	count = (int *)malloc(sizeof(int) * (max - min));
	if (!count)
		return (NULL);
	while (min < max)
	{
		count[range] = min;
		min++;
		range++;
	}
	c = count;
	return (c);
}
/*
int main()
{
	//if (ac != 3)
	//	return 0;
	int min = -30;
	int max = 30;
	int i = 0;
	clock_t start = clock();
	int *arr = ft_range(min, max);
	clock_t term = clock();
	double time = (double)(term - start) / CLOCKS_PER_SEC;
	printf("Tempo di esecuzione: %f secondi\n", time);
	printf("%p\n", arr);
	printf("%d\n", max);
        while (min < max)
        {
                printf("%d\n", arr[i]);
                min++;
                i++;
        }

	return 0;
}*/
