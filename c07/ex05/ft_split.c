/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:02:53 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/13 07:05:18 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


#include <stdlib.h>

static int	is_charset(char c, char *charset);
static int	count_words(char *str, char *charset);
static int	word_len(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		word;
	int		i;
	int		j;

	split = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split)
		return (NULL);
	word = 0;
	i = 0;
	while (word < count_words(str, charset))
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		split[word] = (char *)malloc(sizeof(char) * (word_len(str + i, charset) + 1));
		if (!split[word])
			return (NULL);
		j = 0;
		while (str[i] && !is_charset(str[i], charset))
			split[word][j++] = str[i++];
		split[word++][j] = 0;
	}
	split[word] = 0;
	return (split);
}

static int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	cw;
	int	i;

	cw = 0;
	i = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && !str[i + 1])
			cw++;
		if (!is_charset(str[i], charset) && is_charset(str[i + 1], charset))
			cw++;
		i++;
	}
	return (cw);
}

static int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}
