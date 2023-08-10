/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:06:39 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/26 18:48:58 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*strs[4] = {"Let's", "concatenate", "this", "shit"};

	if (argc < 1)
		return (1);
	printf("%s", ft_strjoin(4, strs, argv[1]));
	return (0);
}
