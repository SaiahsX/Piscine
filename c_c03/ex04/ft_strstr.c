/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:57:26 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/25 19:27:54 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && to_find[c] != '\0')
		{
		c++;
			if (to_find[c] == '\0')
				return (str + i);
		}
		i++;
		c = 0;
	}
	return (0);
}

#include<stdio.h>

int main(void)
{
	char a[50] = "joseph jumps jump rope";
	char b[50] = "jump";
	printf("%s\n", ft_strstr(a, b));
}

