/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:55:33 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 04:57:22 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("The 10 Queens problem has %d solutions!\n", ft_ten_queens_puzzle());
	return (0);
}
