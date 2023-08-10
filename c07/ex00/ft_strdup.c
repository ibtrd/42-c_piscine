/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:56:27 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/21 22:55:32 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	dup = malloc(sizeof(char) * i + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
