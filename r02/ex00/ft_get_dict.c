/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibjean-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:08:13 by ibjean-b          #+#    #+#             */
/*   Updated: 2023/07/23 14:37:44 by ibjean-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int	ft_get_size_dict(int fd)
{
	unsigned int	size;
	int				i;
	char			tp[1];

	i = 1;
	size = 0;
	while (i > 0)
	{
		i = read(fd, tp, 1);
		size++;
	}
	return (size);
}

char	*ft_get_dict(void)
{
	int					fd;
	char				*dict;
	unsigned int		size;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1 || fd < 3)
		return (NULL);
	size = ft_get_size_dict(fd);
	if (close(fd) == -1)
		return (NULL);
	dict = malloc(sizeof (char) * (size));
	if (!dict)
		return (NULL);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1 || fd < 3)
		return (NULL);
	read(fd, dict, size);
	if (close(fd) == -1)
		return (NULL);
	dict[size - 1] = '\0';
	return (dict);
}
