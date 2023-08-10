/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:39:27 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/20 13:24:49 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char *argv[])
{
	int	i;
	int	*tab;
	int	min;
	int	max;

	if (argc < 3)
		return (1);
	tab = NULL;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;
	}
	if (tab)
		free(tab);
	return (0);
}
