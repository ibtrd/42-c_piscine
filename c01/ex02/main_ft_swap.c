/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:30:22 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/06 18:54:32 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;
	int	*panier1;
	int	*panier2;

	a = 2;
	b = 4;
	panier1 = &a;
	panier2 = &b;

	printf("%d - %d\n", a, b);
	ft_swap(panier1, panier2);
	printf("%d - %d", a, b);
}
