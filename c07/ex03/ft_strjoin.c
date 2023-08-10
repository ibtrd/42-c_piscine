/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:21:43 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/26 18:55:53 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	catstrs(int size, char **strs, char *sep, char *strjoin)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			strjoin[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			strjoin[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	strjoin[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		strs_len;
	int		sep_len;
	int		i;

	strs_len = 0;
	i = 0;
	if (size <= 0)
	{
		strjoin = malloc(sizeof(char));
		strjoin[0] = '\0' ;
		return (strjoin);
	}
	while (size > 0 && i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	strjoin = malloc((sizeof(char) * (strs_len + (sep_len * (size - 1)) + 1)));
	if (strjoin == NULL)
		return (NULL);
	catstrs(size, strs, sep, strjoin);
	return (strjoin);
}
