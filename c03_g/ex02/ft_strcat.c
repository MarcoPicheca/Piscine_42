/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:10:08 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/21 10:25:51 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_d;

	i = 0;
	size_d = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[size_d + i] = '\0';
	return (dest);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s1[] = "riifvsnv";
        char s2[] = "leli";
        printf("vero %s\n", strcat(s1, s2));
}
*/
