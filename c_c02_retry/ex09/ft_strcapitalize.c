/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:16:24 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/22 16:40:11 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (c == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			c = 0;
		}
		else if ((c == 1 && str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 48 && str[i] <= 57))
			c = 0;
		else if (c == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i];
		else if (c == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		else
			c = 1;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int main(void)
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  
  printf("%s\n", ft_strcapitalize(str));
  return (0);
}*/
