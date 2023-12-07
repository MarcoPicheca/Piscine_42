/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:51:48 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/05 17:22:49 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;

	dup = (char *)malloc(sizeof(char));
	if (!str)
		return (dup);
	len = ft_strlen(str);
	if (len == 0)
		return (dup);
	dup = (char *)malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		dup[len] = str[len];
		len++;
	}
	dest[len] = '\0';
	return (dup);
}

int main()
{
	printf("%s\n", ft_strdup("o\0 "));
	printf("%s\n", strdup("i\0 "));
	return (0);
}

