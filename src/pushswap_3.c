/*
** EPITECH PROJECT, 2018
** pushswap 3
** File description:
** pushswap
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

void	print_pa(t_riki *skirt, int i)
{
	while (i < my_list_len(skirt)) {
		my_putstr("pb ");
		i = i + 1;
	}
}
