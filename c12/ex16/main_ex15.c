/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex15.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:48:28 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/15 08:27:42 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
void	ft_print_list(t_list *head);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_strcmp(char *a, char *b);
void	ft_list_sort(t_list **begin_list, int (*cmp)());

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
	printf("f_list_sort\n");
	ft_list_sort(&head, &ft_strcmp);
	ft_print_list(head);
	printf("f_sorted_list_insert: %s\n", argv[1]);
	ft_sorted_list_insert(&head, argv[1], &ft_strcmp);
	ft_print_list(head);
	return (0);
}

void	ft_print_list(t_list *head)
{
	int		i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	if (!tmp)
		printf("list is NULL");
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

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	*tmp;
	t_list	*curr;
	t_list	*next;

	if (!*begin_list)
		return ;
	curr = *begin_list;
	while (curr->next)
	{
		next = curr->next;
		if ((*cmp)(curr->data, next->data) > 0)
		{
			tmp = curr->data;
			curr->data = next->data;
			next->data = tmp;
			curr = *begin_list;
		}
		else
			curr = curr->next;
	}
}
