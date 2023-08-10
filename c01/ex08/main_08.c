/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:47:41 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/19 23:18:32 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int     main(void)
{
        int     tab[10] = {7, 4, 15, 3, 2, 49, 5, 15008, 6, 0};
	int	size;

	size = 10;

	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

        ft_sort_int_tab(tab, 10);

        for (int i = 0; i < size; i++)
                printf("%d ", tab[i]);
        printf("\n");

	return 0;
}

