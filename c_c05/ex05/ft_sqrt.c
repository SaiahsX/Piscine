/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:53:09 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/30 23:29:49 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	x;

	x = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (x * x < nb)
	{
		x++;
	}
	if ((x * x) == nb)
	{
		return (x);
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
    printf("Sqrt of 2       is: %d\n", ft_sqrt(2));
    printf("Sqrt of 1       is: %d\n", ft_sqrt(1));
    printf("Sqrt of 16      is: %d\n", ft_sqrt(16));
    printf("Sqrt of 576     is: %d\n", ft_sqrt(576));
    printf("Sqrt of 7921        is: %d\n", ft_sqrt(7921));
    printf("Sqrt of -7921       is: %d\n", ft_sqrt(-7921));
    printf("Sqrt of 15376       is: %d\n", ft_sqrt(15376));
    printf("Sqrt of -15376      is: %d\n", ft_sqrt(-15376));
    printf("Sqrt of 23261329    is: %d\n", ft_sqrt(23261329));
    printf("Sqrt of 80209936    is: %d\n", ft_sqrt(80209936));
    printf("Sqrt of 2147395600  is: %d\n", ft_sqrt(2147395600));
    printf("Sqrt of 2147483646  is: %d\n", ft_sqrt(2147483646));
    //biggest to check is sqrt of if 2147483647
}*/
