/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibjean-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:01:00 by ibjean-b          #+#    #+#             */
/*   Updated: 2023/07/23 22:34:59 by ibjean-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	len;
	int	len2;

	i = 0;
	len = ft_strlen(src);
	len2 = len;
	while (i < len2)
	{
		dest[11 - i] = src[len - 1];
		i++;
		len--;
	}
	while (i < 12)
	{
		dest[11 - i] = '0';
		i++;
	}
	dest[12] = '\0';
	return (dest);
}

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (1);
}

char	*ft_get_input(char *input)
{
	int		len;
	char	*str_out;

	len = ft_strlen(input);
	if (len < 1 || len > 12)
		return (NULL);
	if (ft_is_number(input) == -1)
		return (NULL);
	str_out = malloc(sizeof (char) * 13);
	if (!str_out)
		return (NULL);
	ft_strcpy(str_out, input);
	return (str_out);
}
