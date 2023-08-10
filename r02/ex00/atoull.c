/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoull.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:09:39 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/22 21:34:41 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long	ft_atoull(char *str)
{
	unsigned long long	nb;
	int						i;
	int						neg;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') && str[i] == ' ')
		i++;
	neg = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (neg % 2 != 0)
		nb *= -1;
	return (nb);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}
