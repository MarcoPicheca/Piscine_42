/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:29:03 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/04 17:41:42 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_mem(int size, char **strs)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	i = 0;
	while (strs[i] != NULL && size > i)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			k++;
			j++;
		}
		i++;
	}
	return (j);
}

int	mat_len(char **strs, int size)
{
	int	i;

	i = 0;
	while (*strs != NULL && i != size)
	{
		strs++;
		i++;
	}
	i--;
	if (i < size)
		return (0);
	return (1);
}

char	*ft_join(char *fin_str, char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	len;
	int	k;

	i = 0;
	len = 0;
	while (str[i] && i < size)
	{
		j = 0;
		k = 0;
		while (str[i][j] != '\0')
		{
			fin_str[len] = str[i][j];
			len++;
			j++;
		}
		while (sep[k] != '\0' && (size - 1) > i)
			fin_str[len++] = sep[k++];
		i++;
	}
	fin_str[len] = '\0';
	return (fin_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fin_str;
	int		len;
	int		rep_sep;

	fin_str = (char *)malloc(sizeof(char));
	if (size <= 0)
		return (fin_str);
	if (!sep || !strs || mat_len(strs, size))
		return (fin_str);
	rep_sep = (size - 1) * ft_strlen(sep);
	len = count_mem(size, strs) + rep_sep;
	if (len == rep_sep)
		return (NULL);
	fin_str = (char *)malloc(sizeof(char) * len);
	if (!fin_str)
		return (NULL);
	fin_str = ft_join(fin_str, strs, sep, size);
	return (fin_str);
}
