/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:54:31 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/14 12:28:31 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	s1[] = {""};
	char	s2[] = {"jose"};

	ft_putchar(ft_strcmp(s1, s2) + 48);
}
