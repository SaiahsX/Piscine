/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:51:31 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/30 18:51:46 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>

int main(void)
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(8));
	printf("%d\n", ft_fibonacci(13));
	printf("%d\n", ft_fibonacci(21));
	printf("%d\n", ft_fibonacci(34));
	printf("%d\n", ft_fibonacci(55));
	printf("%d\n", ft_fibonacci(89));
	printf("%d\n", ft_fibonacci(144));
	printf("%d\n", ft_fibonacci(233));
	printf("%d\n", ft_fibonacci(377));
	printf("%d\n", ft_fibonacci(610));
	printf("%d\n", ft_fibonacci(987));
	printf("%d\n", ft_fibonacci(1597));
	printf("%d\n", ft_fibonacci(2584));
	printf("%d\n", ft_fibonacci(4181));
	printf("%d\n", ft_fibonacci(6765));
	printf("%d\n", ft_fibonacci(10946));
	printf("%d\n", ft_fibonacci(17711));
	printf("%d\n", ft_fibonacci(28657));
	return(0);
}*/
