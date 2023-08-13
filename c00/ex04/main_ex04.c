/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 07:11:21 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/13 07:14:07 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_is_negative(int n);

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_is_negative(atoi(argv[1]));
	return (0);
}
