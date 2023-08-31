/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenttil <ipenttil@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:43:40 by ipenttil          #+#    #+#             */
/*   Updated: 2023/08/13 20:58:47 by maura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hor;
	int	ver;
	int	diff;

	ver = 1;
	while (ver <= y && x > 0)
	{
		hor = 1;
		while (hor <= x)
		{
			diff = 0;
			if (((ver == 1 && hor == 1))
				|| (!(x == 1 || y == 1) && (ver == y && hor == x)))
				diff = -1;
			else if ((ver == y && hor == 1) || (ver == 1 && hor == x))
				diff = 1;
			else if ((ver != 1 && ver != y) && (hor != 1 && hor != x))
				diff = -34;
			ft_putchar('B' + diff);
			hor++;
		}
		ver++;
		ft_putchar('\n');
	}
}
