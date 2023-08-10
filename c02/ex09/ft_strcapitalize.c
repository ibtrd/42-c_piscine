/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:37:03 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/11 20:00:01 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphaupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_alphalow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_alphalow(str[i]) == 1)
	{
		str[i] -= 32;
		i++;
	}
	while (str[i])
	{
		if (is_alphalow(str[i]) && !is_alphanum(str[i - 1]))
			str[i] -= 32;
		else if (is_alphaupper(str[i]) && is_alphanum(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
