/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:13:31 by machrist          #+#    #+#             */
/*   Updated: 2023/07/08 18:23:26 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	rush(int x, int y);

int	atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	if (argc > 3)
		write(1, "ERROR: Too many arguments", 25);
	else if (argc < 3)
		write(1, "ERROR: Not enough arguments", 27);
	else if (argv[1][0] == '-' || argv[2][0] == '-')
		write(1, "ERROR: Negative value", 21);
	else
		rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
