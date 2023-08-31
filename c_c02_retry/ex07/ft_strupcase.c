/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:20:29 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/21 16:55:28 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
			i++;
	}
	return (str);
}
/*
#include<stdio.h>

int main(void)
{
	char *f;
	char x[50] = "didjHTYG55HGFFH";
	f = ft_strupcase(x);
	printf("%s", f);
}

int main(void)
{
	int i;
	i = 0;
	char x[50] = "QWjjFRbbBBBBds447ffieHEIWBswwjs";
	ft_strupcase(x);
	while(x[i] != '\0')
	{
		write(1, &x[i], 1);
		i++;
	}
}
//for ln 24 it could also be str[i] -= 32
*/
