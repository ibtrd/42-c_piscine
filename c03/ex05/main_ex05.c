/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:15:37 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/04 04:43:37 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	char	dest[50];

	if (argc != 4)
	{
		printf("Invalid arguments: \"dest\" \"src\" \"size\"");
		return (1);
	}
	strcpy(dest, argv[1]);
	printf("dest = %s\n", dest);
	printf("src = %s\n", argv[2]);
	printf("ft_strlcat = %d\n", ft_strlcat(dest, argv[2], atoi(argv[3])));
	printf("dest = %s\n", dest);
	return (0);
}
