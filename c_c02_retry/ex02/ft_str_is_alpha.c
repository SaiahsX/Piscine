/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:32:02 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/21 16:51:59 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
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
 char sng[30] = "";
     alpha = ft_str_is_alpha(sng);

     printf("%d", alpha);
}

int main(void)
{
	char sng[50] = "";
	
	int a = ft_str_is_alpha(sng);

	char p = a + '0';	//this references the ascii table 
	
	write(1, &p, 1);
}
*/
