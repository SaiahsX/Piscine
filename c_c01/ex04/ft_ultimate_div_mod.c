/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:41:07 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/16 19:17:32 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	empty;

	empty = *a;
	*a = *a / *b;
	*b = empty % *b;
}
/*
#include <stdio.h>
int		main(void)
{
	int a, b, *ptr1, *ptr2;

	a = 10;
	b = 5;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("Division result:  %d\n", a);
	printf("Remainder: %d\n", b);
}*/
