/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:27:30 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/27 12:43:20 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
	{
		i++;
	}
	if (s2[i] == '\0')
		i--;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(&str[i], to_find) == 0)
			{
				ptr = &str[i];
				return (ptr);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s1[] = "dormtoito";
        char s2[] = "to";
        printf("vero %s\n", strstr(s1, s2));
        printf("fake %s\n", ft_strstr(s1, s2));
	return 0;
}*/
