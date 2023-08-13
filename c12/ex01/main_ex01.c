/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:51:09 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/13 22:57:46 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head;

	if (argc == 1)
		return (1);
	head = NULL;
	i = 0;
	while (i < argc)
	{
		ft_list_push_front(&head, argv[i]);
		i++;
	}
	while (head->next)
	{
		printf("%s\n", (char *)head->data);
		head = head->next;
	}
	printf("%s\n", (char *)head->data);
	return (0);
}
