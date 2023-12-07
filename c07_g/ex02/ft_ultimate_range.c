/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:27:13 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/06 09:41:13 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*scale;
	int	i;

	scale = NULL;
	if (min >= max)
	{
		*range = scale;
		return (0);
	}
	i = 0;
	scale = (int *)malloc(sizeof(int) * (max - min));
	if (!scale)
		return (-1);
	while (min < max)
	{
		scale[i] = min;
		min++;
		i++;
	}
	*range = scale;
	return (i);
}
#include <stdio.h>
int	main()
{
	int min = -4;
	int max = 24;
	//int *range = (int *)malloc(sizeof(int) * (max - min));
	int *range = NULL;
	int i = ft_ultimate_range(&range, min, max);
	printf("len range = %d\n", i);
	i = 0;
	while (min < max)
	{
		printf("%d\n", range[i]);
		min++;
		i++;
	}
	return 0;
}
