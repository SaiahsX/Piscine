/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:16:13 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/30 11:54:35 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

#include "ft_abs.h"

int 	main(void)
{
	int	index;
	int	i;

	index = -5;
	i = 5;
	while ( index< 5)
	{
		printf("macro ::abs(%d) = %d\n", index,(ABS(index)));
				index++;
	}
}

