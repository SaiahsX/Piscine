/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:26:00 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/29 12:16:05 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	i;

	sign = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		i *= 10;
		i += *str - 48;
		++str;
	}
	if (!(sign % 2))
		return (i);
	return (-i);
}
/*
#include<stdio.h>

int main(void)
{
	char *string = "  ---+--+1234ab567";
	printf("%d\n", ft_atoi(string));
}
*/
