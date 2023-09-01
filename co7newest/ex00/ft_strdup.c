/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkumari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 06:29:49 by nkumari           #+#    #+#             */
/*   Updated: 2023/08/31 11:37:40 by nkumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc (sizeof (char) * ft_strlength(src) +1);
	if (dest == NULL)
		return (NULL);
	while (*src)
		dest[i++] = *src++;
	dest[i] = ('\0');
	return (dest);
}
/*int	main(void)
{
	char	s1[] = "Duplicate";
	printf("%s", ft_strdup(s1));
	return (0);
}*/
