/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:25:55 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/16 22:16:10 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_error(int argc, char *argv[]);
int		solver(char grid[4][4], char input[4][4]);
void	display(char solution[4][4]);
void	arg_to_array(char input[4][4], char *str);
void	init_grid(char grid [4][4]);
void	ft_print_error(void);

int	main(int argc, char *argv[])
{
	char	grid[4][4];
	char	input[4][4];

	if (!ft_error(argc, argv))
		return (0);
	arg_to_array(input, argv[1]);
	init_grid(grid);
	if (solver(grid, input))
		display(grid);
	else
		ft_print_error();
	return (0);
}
