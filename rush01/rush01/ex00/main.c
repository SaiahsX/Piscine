/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:41:40 by xriera-c          #+#    #+#             */
/*   Updated: 2023/08/22 12:27:24 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
//int	fill_grid(int grid[4][4], int sides[16], int POOOOOOOSSSSS)
//{
	//Check if grid is solved
	//
	//
	//Otherwise fill

void	display_solution(int grid[4][4])
{
	int i;
	int j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	start_grid(int grid[4][4])
{
	int	i;
	int j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			grid[i][j] = 55;
			j++;
		}
		i++;
	}
}

//int	main(int argc, char *argv[])
int	main(void)
{
	int	grid[4][4];

	start_grid(grid);
	display_solution(grid);
	return (0);
}
