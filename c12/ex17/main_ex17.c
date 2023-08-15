/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex17.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:48:28 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/15 20:02:37 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, \
		int (*cmp)());
void	ft_print_list(t_list *head);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_strcmp(char *a, char *b);
void	ft_list_sort(t_list **begin_list, int (*cmp)());

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head1;
	t_list	*head2;

	if (argc == 1 || argc % 2 == 0)
	{
		printf("Add arg\n");
		return (1);
	}
	i = 1;
	head1 = NULL;
	head2 = NULL;
	while (i < argc)
	{
		ft_list_push_front(&head1, argv[i]);
		ft_list_push_front(&head2, argv[i + 1]);
		i += 2;
	}
	ft_list_sort(&head1, &ft_strcmp);
	ft_list_sort(&head2, &ft_strcmp);
	printf("f_sorted_list_merge\n");
	ft_sorted_list_merge(&head1, head2, &ft_strcmp);
	ft_print_list(head1);
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
	t_list	*curr;

	if (*begin_list)
	{
		curr = *begin_list;
		while (curr->next)
			curr = curr->next;
		new = ft_create_elem(data);
		curr->next = new;
	}
	else
		*begin_list = ft_create_elem(data);
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
	ft_print_list(*begin_list);
}
