/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maura <maura@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:47:08 by maura             #+#    #+#             */
/*   Updated: 2023/08/13 20:06:00 by maura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hor;
	int	ver;
	int	diff;

	ver = 0;
	while (ver < y && x > 0)
	{
		hor = 0;
		while (hor < x)
		{
			diff = 0;
			if (((ver == 0 && hor == 0))
				|| (!(x == 1 || y == 1) && (ver == y - 1 && hor == x - 1)))
				diff = 5;
			else if ((ver == y - 1 && hor == 0) || (ver == 0 && hor == x - 1))
				diff = 50;
			else if ((ver != 0 && ver != y - 1) && (hor != 0 && hor != x - 1))
				diff = -10;
			ft_putchar('*' + diff);
			hor++;
		}
		ver++;
		ft_putchar('\n');
	}
}
