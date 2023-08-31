/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:10:37 by oadewumi          #+#    #+#             */
/*   Updated: 2023/08/16 19:19:45 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void) 

{
    int a = 16;
    int b = 5;
    int div_result, mod_result;

    ft_div_mod(a, b, &div_result, &mod_result);

    printf("Division result: %d\n", div_result);
    printf("Remainder: %d\n", mod_result);

    return 0;
}*/
