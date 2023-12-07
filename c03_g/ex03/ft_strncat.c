/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:10:08 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/22 11:37:55 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_d;

	i = 0;
	size_d = ft_strlen(dest);
	if (nb < 1)
		return (dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[size_d] = src[i];
		size_d++;
		i++;
	}
	dest[size_d] = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s1[] = "riiv";
        char s2[] = "leli";
	unsigned int	i = 10;
      // printf("vero %s\n", strncat(s1, s2, i));
       printf("fake %s\n", ft_strncat(s1, s2, i));
}
*/
