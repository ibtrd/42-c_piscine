/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:51:46 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/26 11:50:52 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char *argv[])
{
	int	*range;
	int	min;
	int	max;
	int	range_value;
	int	i;

	if (argc != 3)
		return (-1);
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("min=%d max=%d\n", min, max);
	range_value = ft_ultimate_range(&range, min, max);
	printf("range=%d\n", range_value);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
}
