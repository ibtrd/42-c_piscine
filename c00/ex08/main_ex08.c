/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:46:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/13 05:52:47 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_print_combn(int n);

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	ft_print_combn(atoi(argv[1]));
}
