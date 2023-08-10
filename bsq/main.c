/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:28:13 by mjuffard          #+#    #+#             */
/*   Updated: 2023/07/25 18:05:16 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		return (0);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (init_solve(argv[i]))
				write(2, "map error\n", 10);
			if (i < argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
