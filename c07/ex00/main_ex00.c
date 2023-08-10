/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:46:13 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/20 11:23:38 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *str);

int	main(int argc, char *argv[])
{
	char	*dup;

	if (argc < 2)
		return (1);
	dup = ft_strdup(argv[1]);
	printf("%s", dup);
	return (0);
}
