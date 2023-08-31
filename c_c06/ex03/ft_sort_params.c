/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:28:40 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/31 19:27:31 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char *p1, char *p2)
{
	char xtr;

	xtr = *p1;
	*p1 = *p2;
	*p2 = xtr;
}

void	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int swap;

	i = 1;
	swap = 0;
	while (argv[i + 1] != '\0')
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(argv[i], argv[i + 1]);
			swap++;
		}
		if (swap > 0 && argv[i - swap] > 0)
		{
			if (ft_strcmp(argv
		}
	}





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
