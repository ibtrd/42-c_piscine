/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex11.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:11:24 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/03 04:01:33 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char			str[130];
	unsigned char	c;
	int				i;

	c = 1;
	i = 0;
	while (c <= 127)
	{
		str[i] = c;
		c++;
		i++;
	}
	str[i] = 0;
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	ft_putstr_non_printable(str);
	return (0);
}
