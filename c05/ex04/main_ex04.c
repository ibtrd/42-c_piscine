/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:09:00 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/17 22:54:48 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Enter N number the N-th element of the Fibonacci sequence\n");
	if (argc == 2)
		printf("%d", ft_fibonacci(atoi(argv[1])));

	return (0);
}
