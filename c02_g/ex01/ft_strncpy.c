/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:35:30 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/27 12:53:55 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s1[] = "to";
        char s2[] = "dormtoito";
        printf("fake %s\n", ft_strncpy(s1, s2, 5));
        return 0;
}

