/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:43:38 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/12 21:30:23 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	base_len(char *str);
int	get_size(int nb, int base_len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		size;
	char	*ft_nbr;
	int		i;

	nb = (long)ft_atoi_base(nbr, base_from);
	size = get_size(nb, base_len(base_to));
	ft_nbr = (char *)malloc(sizeof(char) * (size + 1));
	i = size;
	ft_nbr[i--] = 0;
	if (nb < 0)
	{
		ft_nbr[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		ft_nbr[0] = '0';
	while (nb)
	{
		ft_nbr[i] = base_to[nb % base_len(base_to)];
		nb /= base_len(base_to);
		i--;
	}
	return (ft_nbr);
}

int	get_size(int nb, int base_len)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		size++;
		nb *= -1;
	}
	while (nb / base_len)
	{
		size++;
		nb /= base_len;
	}
	return (size);
}
