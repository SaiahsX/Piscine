/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:36:47 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/16 19:02:54 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main()

{
	char *str = "hello";
	ft_putstr(str);
}*/
