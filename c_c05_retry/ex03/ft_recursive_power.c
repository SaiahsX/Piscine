/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:24:00 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/30 23:41:52 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/*
#include<stdio.h>

int main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
	return (0);
}*/
