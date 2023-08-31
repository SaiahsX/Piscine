/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:39:22 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/20 23:11:14 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
		i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include<unistd.h>
#include<stdio.h>

int main (void)
{
	int alpha;
 char sng[30] = "aaddgsrdSDF";
     alpha = ft_str_is_lowercase(sng);

     printf("%d", alpha);
}

int main(void)
{
	char sng[50] = "ghdK";

	int a = ft_str_is_lowercase(sng);

	char p = a + '0';	//this references the ascii table

	write(1, &p, 1);
}
*/
