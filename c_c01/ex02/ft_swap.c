/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:55:38 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/16 17:28:34 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	xtr;

	xtr = *a;
	*a = *b;
	*b = xtr;
}
/*
#include <stdio.h>

int main()
{
    int x = 5, y = 10;

    printf("Before : x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After : x = %d, y = %d\n", x, y);

    return 0;
}*/
