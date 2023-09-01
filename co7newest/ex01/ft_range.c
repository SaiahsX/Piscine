/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 08:13:43 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/31 12:39:14 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	new = (int *)malloc(sizeof(new) * size);
	if (new == NULL)
		return (NULL);
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}
/*int	main(void)
{
	int	min;
	int	max;
	int	*newarr;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 30;
	size = max - min;
	newarr = ft_range(min, max);
	while (i < size)
	{
		printf ("%d\n", newarr[i]);
		i++;
	}
}*/
