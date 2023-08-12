/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:21:46 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 04:00:24 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

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
	printf("ft_count_if return: %d\n", ft_any(argv, &len_is_one));
	return (0);
}
