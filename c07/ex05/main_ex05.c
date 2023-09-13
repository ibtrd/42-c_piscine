/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:02:51 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/13 07:11:46 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char *str, char *charset);
static void	test_ft_split(char *s, char *c);
static int	count_words(char *str, char *charset);
static int	is_charset(char c, char *charset);
static void	free_array(char **str);

int	main(void)
{
	char	str[100];
	char	charset[10];

	//test 1
	strcpy(str, "simple test");
	strcpy(charset, " ");
	test_ft_split(str, charset);
	//test 2
	strcpy(str, "simple test");
	strcpy(charset, "+");
	test_ft_split(str, charset);
	//test 3
	strcpy(str, "simple test");
	strcpy(charset, "s");
	test_ft_split(str, charset);
	//test 4
	strcpy(str, "simple test");
	strcpy(charset, "t");
	test_ft_split(str, charset);
	//test 5
	strcpy(str, "fmsl;fjnsdlgjns;dfmsl;fms;fs'd;fsfn;lfgjs;kgj'fvjgh");
	strcpy(charset, "h");
	test_ft_split(str, charset);
	//test 6
	strcpy(str, "hhfmsl;fjnsdlgjns;dfmshhhl;fms;fs'd;fsfn;lfgjs;kgj'fvjghh ");
	strcpy(charset, "h");
	test_ft_split(str, charset);
	//test 7
	strcpy(str, " hhfmsl;fjnsdlgjns;dfmshhhl;fms;fs'd;fsfn;lfgjs;kgj'fvjghh ");
	strcpy(charset, "h");
	test_ft_split(str, charset);
	//test 8
	strcpy(str, "");
	strcpy(charset, "h");
	test_ft_split(str, charset);
	//test 9
	strcpy(str, "");
	strcpy(charset, "");
	test_ft_split(str, charset);
	
	return (0);
}

static void	test_ft_split(char *s, char *c)
{
	char	**ft_ret;
	char	*token;
	char	**free_start;
	int		word;
	int		word_count;
	
	ft_ret = ft_split(s, c);
	word_count = count_words(s, c);
	free_start = ft_ret;
	token = strtok(s, c);
	word = 0;
	printf("count word = %d\n", word_count);
	while(word++ < word_count) 
	{	
		printf("\t[%s] /// [%s]\n", *ft_ret, token);
    	if (!*ft_ret || strcmp(token, *ft_ret))
		{
			printf("\e[0;101mKO!!\e[0m\n");
			free_array(free_start);
			return ;
		}
    	token = strtok(NULL, c);
		ft_ret++;
  	}
	if (!*ft_ret)
		printf("\e[0;102mOK!\e[0m\n");
	else
		printf("\e[0;101mKO!\e[0m\n");
	free_array(free_start);
}

static int	count_words(char *str, char *charset)
{
	int	cw;
	int	i;

	cw = 0;
	i = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && str[i + 1] == '\0')
			cw++;
		if (!is_charset(str[i], charset) && is_charset(str[i + 1], charset))
			cw++;
		i++;
	}
	return (cw);
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

static void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
