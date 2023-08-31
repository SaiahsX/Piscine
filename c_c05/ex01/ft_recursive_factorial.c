/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:50:34 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/30 23:23:23 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	temp;

	temp = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		temp = nb * ft_recursive_factorial(nb - 1);
	}
	return (temp);
}
/*
#include<stdio.h>

int main(void)
{
        printf("%d\n", ft_recursive_factorial(5));
        return (0);
}
*/
