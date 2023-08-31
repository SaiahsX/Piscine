/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:17:02 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/20 23:23:50 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	int alpha;
 char sng[30] = "SGDDE";
     alpha = ft_str_is_uppercase(sng);

     printf("%d", alpha);
}

int main(void)
{
	char sng[50] = "";
	
	int a = ft_str_is_uppercase(sng);

	char p = a + '0';	//this references the ascii table 
	
	write(1, &p, 1);
}
*/
