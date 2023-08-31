/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:26:15 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/21 13:59:25 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
int main (void)
{
	int a;
 char sng[30] = "r";
     a = ft_str_is_printable(sng);

     printf("%d", a);
}

int main(void)
{
	char sng[50] = "";
	
	int a = ft_str_is_printable(sng);

	char p = a + '0';	//this references the ascii table 
	
	write(1, &p, 1);
}
*/	
