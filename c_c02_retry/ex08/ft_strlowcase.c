/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:59:09 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/21 18:15:13 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
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
	f = ft_strlowcase(x);
	printf("%s", f);
}

int main(void)
{
	int i;
	i = 0;
	char x[50] = "QWjjFRbbBBBBds447ffieHEIWBswwjs";
	ft_strlowcase(x);
	while(x[i] != '\0')
	{
		write(1, &x[i], 1);
		i++;
	}
}
//for ln 24 it could also be str[i] += 32
*/
