/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:43:50 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/21 17:56:54 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 1 && flag == 1
			&& ((str[i - 1] >= 0 && str[i - 1] <= 47)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| str[i - 1] == 127))
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && flag == 0)
			str[i] += 32;
		else
			flag = 1;
		i++;
	}
	return (str);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main()
{
        char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("%s", ft_strcapitalize(str));
        return(0);
}
