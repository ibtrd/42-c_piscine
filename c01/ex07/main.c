/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:27:46 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/21 12:12:30 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void 	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 4, 4, 7, 8, 9,};

        for (int i = 0; i < 10; i++)
                printf("%d", tab[i]);

	ft_rev_int_tab(tab, 10);

	for (int i = 0; i < 10; i++)
		printf("%d", tab[i]);
	printf("\n");

return 0;	
}
