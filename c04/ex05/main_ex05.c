/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:22:58 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/17 11:53:28 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*nbr;
	char	*base;

	nbr = "21474561";
	base = "0123456789";
	printf("%d", ft_atoi_base(nbr, base));
	return (0);
}
