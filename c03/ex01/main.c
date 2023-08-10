/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:54:31 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/12 10:04:20 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	s1[] = {"abcdefgl"};
	char	s2[] = {"abcdefge"};

	ft_putchar(ft_strncmp(s1, s2, 3) + 48);
}
