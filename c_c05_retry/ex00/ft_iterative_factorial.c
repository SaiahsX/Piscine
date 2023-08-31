/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:36:51 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/30 23:36:50 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		temp = temp * (nb - 1);
		nb--;
	}
	return (temp);
}
/*
#include<stdio.h>

int	main(void)
{
		printf("%d\n", ft_iterative_factorial(5));
		return (0);
}*/
