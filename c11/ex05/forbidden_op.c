/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forbidden_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:34:06 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 17:02:57 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

static int	div_by_zero(char **str);
static int	mod_by_zero(char **str);

int	forbidden_op(char **str)
{
	if (div_by_zero(str))
		return (1);
	if (mod_by_zero(str))
		return (1);
	return (0);
}

static int	div_by_zero(char **str)
{
	if (str[2][0] == '/' && ft_atoi(str[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	return (0);
}

static int	mod_by_zero(char **str)
{
	if (str[2][0] == '%' && ft_atoi(str[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}
