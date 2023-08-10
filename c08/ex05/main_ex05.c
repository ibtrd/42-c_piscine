/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:40:34 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/27 10:36:24 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"
#include "ft_stock_str.h"

t_stock_str		*ft_strs_to_tab(int ac, char **av);
void			ft_show_tab(struct s_stock_str *par);

int	main(int argc, char *argv[])
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(tab);
}
