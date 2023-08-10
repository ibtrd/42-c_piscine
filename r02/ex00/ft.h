/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibjean-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:20:14 by ibjean-b          #+#    #+#             */
/*   Updated: 2023/07/23 23:22:37 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef	struct  s_key
{
	 unsigned int	key;
	 char			*value;
}	t_key;

int				ft_atoi(char *str);
char			*ft_get_dict(void);

int				ft_key_count(char *str);
int				ft_get_key_num(char *str, int key);
char			*ft_get_key_str(char *str, int key);
char    		*ft_dup_key_str(char *dest, char *src, int len);

void    		ft_putchar(char c);
void   			ft_putstr(char *str);
void    		ft_putchar_error(char c);
void    		ft_putstr_error(char *str);
void			ft_error(void);
void			ft_dict_error(void);
unsigned int	ft_get_size_dict(int fd);
char			*ft_get_dict(void);
t_key			*ft_init_tab(int size, char *dict);
char			*ft_get_struct(t_key *tab, unsigned int nb, int nb_key);
void    ft_print_res(char *input, t_key *dict, int nb_key);
int print_hundred(char *str, t_key *dict, int nb_key, int i);
int print_ten(char *str, t_key *dict, int nb_key, int i);
int print_unit(char *str, t_key *dict, int nb_key, int i);
int rush02_init(char *input);
void    rush02_display(t_key *tab, char *input, int nb_key);
int ft_is_it_zero(char *str, t_key *dict, int nb_key);
void    ft_putstr_s(char *str);

#endif
