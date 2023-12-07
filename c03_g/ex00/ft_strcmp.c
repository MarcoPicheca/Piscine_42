/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:25:00 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/23 19:50:27 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "colesterolo";
	char s2[] = "colesterolo";
	printf("vero %d\n", strcmp(s1, s2));
	printf("fake %d\n", ft_strcmp(s1, s2));
}
*/
