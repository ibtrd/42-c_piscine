/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:11:22 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/13 19:39:25 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

int	main(int argc, char **argv)
{
	t_list	*elem;

	if (argc == 1)
		return (1);
	elem = ft_create_elem(argv[1]);
	printf("&argv[1]: %p\n", &argv[1]);
	printf("&elem.data: %p\n", elem->data);
	printf("argv[1]: %s\n", argv[1]);
	printf("elem.data: %s\n", (char *)elem->data);
	free(elem);
	return (0);
}
