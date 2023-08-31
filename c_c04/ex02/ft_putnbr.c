/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:42:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/29 12:15:33 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printchar(char i)
{
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 && nb > -2147483648)
	{
		ft_printchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_printchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_printchar(nb % 10 + '0');
	}
}
/*
int	main()
{
	int input1;
	int	input2;
	int	input3;
	int	input4;
	int	input5;
	int	input6;
	int input7;

	input1 = -2147483648;
	ft_putnbr(input1);
	ft_printchar('\n');
	input2 = -567;
	ft_putnbr(input2);
	ft_printchar('\n');	
	input3 = -7;
	ft_putnbr(input3);
	ft_printchar('\n');
	input4 = 0;
	ft_putnbr(input4);
	ft_printchar('\n');
	input5 = 7;
	ft_putnbr(input5);
	ft_printchar('\n');
	input6 = 765;
	ft_putnbr(input6);
	ft_printchar('\n');
	input7 = 2147483647;
	ft_putnbr(input7);
	ft_printchar('\n');

	return (0);
}
*/
