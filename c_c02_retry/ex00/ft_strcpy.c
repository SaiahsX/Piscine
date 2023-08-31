/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:42:58 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/22 17:38:29 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*	this is the write function
#include <unistd.h>

int main()
 {
    char s[] = "how you dey";
	char d[] = "";	
    
	ft_strcpy(d, s);
	int c;
	c = 0;
	while (d[c] != '\0')
	{
		write(1, &d[c], 1);
		c++;
	}
 }
*/
/* this is the print function
#include <stdio.h>

int main()
{
	char sorc[] = "how you dey";
	char dstin[] = "";

	ft_strcpy(dstin, sorc);
	printf("%s\n", dstin);

}
*/
