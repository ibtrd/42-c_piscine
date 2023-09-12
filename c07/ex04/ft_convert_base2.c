/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:43:56 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/12 21:26:21 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_base_valid(char *base);
int			get_base_index(char c, char *base);
int			base_len(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;
	int	i;

	if (!is_base_valid(base) || base_len(base) == 1)
		return (0);
	i = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = 0;
	while (str[i] && get_base_index(str[i], base) != -1)
	{
		nb = nb * base_len(base) + get_base_index(str[i], base);
		i++;
	}
	return (nb * sign);
}

static int	is_base_valid(char *base)
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

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i])
	{
		if (i > base_len(base))
			return (-1);
		i++;
	}
	return (i);
}
