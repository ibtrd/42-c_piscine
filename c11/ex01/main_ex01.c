/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:51:54 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 03:13:31 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	add_two(int nb)
{
	nb = nb * 100;
	return (nb);
}

int	main(void)
{
	int	tab[5];
	int	*map;
	int	i;

	i = 0;
	while (i < 5)
	{
		tab[i] = i + 1;
		i++;
	}
	map = ft_map(tab, 5, &add_two);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", map[i]);
		i++;
	}
	return (0);
}
