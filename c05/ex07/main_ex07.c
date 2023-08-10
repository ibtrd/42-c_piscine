/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:09:00 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/18 13:26:47 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
