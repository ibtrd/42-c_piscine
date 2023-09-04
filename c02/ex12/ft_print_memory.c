/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 05:50:02 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/04 02:04:42 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ptr_address(void *ptr);
void	print_ulong_as_base(unsigned long value, char *base);
void	print_char_as_base(char c, char *base, int size);
void	print_content(char *str, int index, int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;
	char			*buf;

	buf = (char *)addr;
	i = 0;
	while (i < size)
	{
		print_ptr_address(addr + i);
		l = 0;
		while (l < 16 && i < size)
		{
			if (l % 2 == 0)
				write(1, " ", 1);
			if (buf)
				print_char_as_base(buf[i], "0123456789abcdef", 1);
			l++;
			i++;
		}
		print_content(addr, i, l);
		write(1, "\n", 1);
	}
	return (addr);
}

void	print_ptr_address(void *ptr)
{
	unsigned long	address;
	int				len;
	int				i;

	address = (unsigned long)ptr;
	len = 0;
	while (address / 16)
	{
		address /= 16;
		len++;
	}
	i = 1;
	while (i + len != 16)
	{
		write(1, "0", 1);
		i++;
	}
	address = (unsigned long)ptr;
	print_ulong_as_base(address, "0123456789abcdef");
	write(1, ":", 2);
}

void	print_ulong_as_base(unsigned long value, char *base)
{
	unsigned long	h;

	if (value >= 16)
		print_ulong_as_base(value / 16, base);
	h = value % 16;
	write(1, &base[h], 1);
}

void	print_char_as_base(char c, char *base, int size)
{
	int		h;

	if (size < 2)
	{
		if (c >= 16)
			print_char_as_base(c / 16, base, size + 1);
		else
			write(1, "0", 1);
	}
	h = 0;
	while (h != c % 16)
		h++;
	write(1, &base[h], 1);
}

void	print_content(char *str, int index, int size)
{
	int	n;

	n = 0;
	index -= 16;
	if (size < 16)
	{
		while (size < 16)
		{
			if (size++ % 2)
				write(1, "  ", 2);
			else
				write(1, "   ", 3);
			index++;
			n++;
		}
	}
	write(1, " ", 1);
	while (n++ < size)
	{
		if (str[index] >= 32 && str[index] <= 126)
			write(1, &str[index], 1);
		else
			write(1, ".", 1);
		index++;
	}
}
