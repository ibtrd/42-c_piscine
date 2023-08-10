/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:37:04 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/14 21:39:30 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = 0;
	while (dest[d_len] && d_len < size)
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (size == 0)
		return (d_len + s_len);
	i = 0;
	while (src[i] && i + d_len < size - 1)
	{	
		dest[d_len + i] = src[i];
		i++;
	}
	return (d_len + s_len);
}
