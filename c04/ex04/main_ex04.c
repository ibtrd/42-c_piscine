/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:22:58 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/20 23:59:35 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
