/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:12:17 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/12 17:04:24 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>
# include <stdio.h>

//main.c
int		operator_index(char *str);
int		result(int a, int b, int (*f)(int, int));

//ft_lib.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

//forbidden_op.c
int		forbidden_op(char **str);

//op_functions.c
int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);

#endif