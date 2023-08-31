/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:06:13 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/22 16:34:38 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
int main(void)

{
	char s[50] = "correct guy";
	char d[50] = "hdhsskdddodsdjsdhhsdids";
	int c;
	c = 5;
	
	ft_strncpy(d, s, c);
	printf("%s", d);
	return (0);
}

int main (void)

{
	int x = 0;
	int	dx = 5;
	char s[50] = "correct";
	char d [50] = "ofiscwhvuvhvvhsuodvhiovhi";
	ft_strncpy(d, s, dx);
	while (d[x] != '\0')
	{
		write(1, &d[x], 1);
	x++;
	}
}*/
