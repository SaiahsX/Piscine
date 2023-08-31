/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:55:11 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/16 19:22:27 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	alpha;
	int	omega;
	int	rev;

	alpha = 0;
	omega = size - 1;
	while (alpha < omega)
	{
		rev = tab[alpha];
		tab[alpha] = tab[omega];
		tab[omega] = rev;
		alpha++;
		omega--;
	}
}
/*
#include <stdio.h>

int main()
{

	int arr[] = {8,4,3,2};

	int sz = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr,sz);

	for (int i = 0;
			i < sz;
			i++)
	printf ("%d",arr[i]);
	{
	}
	return 0;
}*/
