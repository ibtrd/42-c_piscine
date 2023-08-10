/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:10:24 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/23 22:54:11 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_key_str_len(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			j++;
		i++;
	}
	if (str[i - 1] == ' ')
		i--;
	return (i - j);
}

int	ft_go_to_key(char *str, int key)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (k != key)
	{
		if (str[i] == '\n' && str[i + 1] != '\n')
			k++;
		i++;
	}
	return (i);
}

int	ft_get_key_num(char *str, int key)
{
	int	i;
	int	key_num;

	i = ft_go_to_key(str, key);
	key_num = ft_atoi(&str[i]);
	return (key_num);
}

char	*ft_get_key_str(char *str, int key)
{
	int		i;
	int		len;
	char	*key_str;

	i = ft_go_to_key(str, key);
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] == ' ')
		i++;
	len = ft_key_str_len(&str[i]);
	key_str = malloc(sizeof(char) * len + 1);
	if (key_str == NULL)
	{
		ft_error();
		return (NULL);
	}
	key_str = ft_dup_key_str(key_str, &str[i], len);
	return (key_str);
}

char	*ft_dup_key_str(char *dest, char *src, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < len)
	{
		if (!(src[i] == ' ' && src[i + 1] == ' '))
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
