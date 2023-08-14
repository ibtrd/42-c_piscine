/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:48:28 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/14 18:24:48 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
	void *data_ref, int (*cmp)());
void	ft_print_list(t_list *head);
t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	incr_ptr(void *ptr);
int		is_equal(char *cmp, char *ref);

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head;

	if (argc == 1)
		return (1);
	i = 2;
	head = NULL;
	while (i < argc)
	{
		ft_list_push_front(&head, argv[i]);
		i++;
	}
	ft_print_list(head);
	printf("ft_list_foreach_if\n");
	ft_list_foreach_if(head, &incr_ptr, argv[1], &is_equal);
	ft_print_list(head);
	return (0);
}

void	ft_print_list(t_list *head)
{
	int		i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		if (i != 0)
			printf(" - ");
		printf("%s", (char *)tmp->data);
		tmp = tmp->next;
		i++;
	}
	printf("\n");
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list *));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

void	incr_ptr(void *ptr)
{
	*(char *)ptr += 1;
}

int	is_equal(char *cmp, char *ref)
{
	if (cmp[0] == ref[0])
		return (1);
	return (0);
}
