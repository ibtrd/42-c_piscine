/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex12.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:51:36 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/04 01:45:12 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char 	str1[] = "Bonjour les aminches\n\n\nc\n est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n";
	char 	str2[] = "Mais bon f*** cet exercice un peu quand meme";
	void	*ptr;

	//printf("---%p\n\n", str);
	ptr = ft_print_memory(str1, strlen(str1));
	printf("\n");
	ptr = ft_print_memory(str2, strlen(str2));
	(void)ptr;
	
	return (0);
}