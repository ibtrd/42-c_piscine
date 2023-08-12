/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:21:46 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 03:55:40 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int	len_is_one(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (i == 1)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	printf("ft_any return: %d\n", ft_any(argv, &len_is_one));
	return (0);
}
