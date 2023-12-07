/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:01:33 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/22 11:37:26 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0'
		&& i < (n - 1) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s1[] = "coleli";
        char s2[] = "coleli";
        printf("vero %d\n", strncmp(s1, s2, 5));
        printf("fake %d\n", ft_strncmp(s1, s2, 5));
}
*/
