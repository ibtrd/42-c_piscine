/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:46:34 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/12 20:39:09 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	char	*ft_nbr;

	if (argc == 4)
	{
		ft_nbr = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("Base [%s] | %s\n", argv[2], argv[1]);
		printf("Base [%s] | %s\n", argv[3], ft_nbr);
	}
	return (0);
}