/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_print_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:00:46 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/11 19:21:56 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char A)
{
	A = 'a';
	while (A <= 'z')
	{
		write(1, &A, 1);
		A++;
	}
}

int	main(void)

{
	ft_print_alphabet('W');
}
