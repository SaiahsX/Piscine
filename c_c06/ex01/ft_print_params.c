/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:27:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/31 15:25:32 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0' && argc > 0)
		{
			ft_printchar(argv[i][j]);
			j++;
		}
		i++;
		ft_printchar('\n');
	}
}
