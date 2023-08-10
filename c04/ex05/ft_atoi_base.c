/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:45:22 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/17 11:52:43 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			else if (base[j] == '+' || base[j] == '-')
				return (0);
			else if (base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	neg;
	int	i;
	
	i = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	neg = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		(base)[nb] = (base)[nb] * base_len(base) + str[i] - 48;
	if (neg % 2 != 0)
		nb *= -1;
	return (nb);
}
