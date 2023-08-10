/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:38:42 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/26 15:48:20 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int nb;
	if (argc > 1)
	{
		nb = atoi(argv[1]);
		printf("%s absolute value is %d\n", argv[1], ABS(nb));
		return (0);
	}
}
