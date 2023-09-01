/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:57:43 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/30 17:56:07 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*newarr;
	int	i;
	int	diffrence;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diffrence = max - min;
	newarr = malloc(diffrence * sizeof(int));
	if (!newarr)
	{
		*range = 0;
		return (-1);
	}
	*range = newarr;
	while (i < diffrence)
	{
		newarr[i] = min + i;
		i++;
	}
	return (diffrence);
}
/*int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	i;
	int	*tab;

	i = 0;
	min = 2;
	max = 15;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
			i++;
	}
}*/
