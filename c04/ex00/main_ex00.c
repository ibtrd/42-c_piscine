/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:20:11 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/13 23:34:56 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_putnbr(int nb);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(ft_strlen(argv[1]));
	return (0);
}
