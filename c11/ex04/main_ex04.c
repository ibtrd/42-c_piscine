/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:19:45 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 04:48:08 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	intcmp(int n1, int n2)
{
	return (n1 - n2);
}

int	main(void)
{
	int	tab[5] = {5, 10, 100, 100, 125};

	printf("ft_is_sort return: %d\n", ft_is_sort(tab, 5, &intcmp));
	return (0);
}
