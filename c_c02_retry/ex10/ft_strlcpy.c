/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:44:47 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/21 21:59:31 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	if (size != 0)
		dest [size - 1] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int main(void)

{
	char s[50] = "correct guy";
	char d[50] = "hdhsskdddodsdjsdhhsdids";
	int c;
	c = 12;
	
	ft_strlcpy(d, s, c);
	printf("%s", d);
	return (0);
}

int main (void)

{
	int x = 0;
	int	dx = 7;
	char s[50] = "correct";
	char d [50] = "ofiscwhvuvhvvhsuodvhiovhi";
	ft_strlcpy(d, s, dx);
	while (d[x] != '\0')
	{
		write(1, &d[x], 1);
	x++;
	}
}*/
