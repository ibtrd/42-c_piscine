/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:04:38 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/26 15:28:10 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
		while (*str)
			write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
		return ((EVEN(nbr)) ? TRUE : FALSE);
}

int		main(int argc, char **argv)
{
		(void)argv;
		if (ft_is_even(argc - 1) == TRUE)
			ft_putstr(EVEN_MSG);
		else
			ft_putstr(ODD_MSG);
		return (SUCCESS);
}
