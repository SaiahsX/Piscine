/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:21:25 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/20 22:30:52 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
		i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include<stdio.h>
#include<unistd.h>

int main(void)
{
	char	num[20]= "";
	char n;
	n = ft_str_is_numeric(num);
	printf("%d", n);
}


int main(void)
{
	int a;
	char p;
	char n[20] = "";
	a = ft_str_is_numeric(n);
	p = a + '0'; //what happened here is conversion
   	of int to char while using '0' 
	reference to ascii for the conversion

	write(1, &p, 1);
}
*/
