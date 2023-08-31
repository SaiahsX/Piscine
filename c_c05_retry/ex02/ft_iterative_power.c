/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:59:25 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/30 23:40:20 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)

{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}
/*
#include<stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(2, 31));
	return (0);
}*/
