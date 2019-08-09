/*
** EPITECH PROJECT, 2017
** oui
** File description:
** oui
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

t_riki	*list_init(int ac, char **av)
{
	t_riki	*triks = NULL;
	int number;
	int i = ac;

	while (i != 0) {
		number = my_getnbr(av[i]);
		my_put_in_list_first(&triks, number);
		i = i - 1;
	}
	my_remove_from_list_last(triks);
	return (triks);
}

int	is_list_sorted(t_riki	*triks, int len)
{
	int	list_len = my_list_len(triks);
	int i = 0;
	int index = 0;
	int cmp;

	if (list_len < len) {
		return (0);
	}
	while (i != list_len - 1) {
		cmp = triks->number;
		triks = triks->next;
		if (cmp <= triks->number) {
			index = index + 1;
		}
		i = i + 1;
	}
	if (index == i) {
		return (1);
	} else {
		return (0);
	}
}

int	find_bigger(t_riki	*triks)
{
	t_riki	*skirt = triks;
	int bigger = triks->number;
	int first;
	int second;
	int i = 0;

	while (skirt->next != NULL) {
		if (i == 0) {
			first = skirt->number;
			i = 42;
		}
		skirt = skirt->next;
		second = skirt->number;
		if (first < second) {
			bigger = second;
			first = bigger;
		}
	}
	return (bigger);
}

t_riki	*bigger_first(t_riki *triks, int bigger)
{
	int tmp = triks->number;

	while (triks->number != bigger) {
		tmp = triks->number;
		my_put_in_list_last(triks, tmp);
		my_remove_from_list_first(&triks);
		my_putstr("rb ");
	}
	return (triks);
}

int	main(int ac, char **av)
{
	t_riki	*triks = list_init(ac, av);
	t_riki	*skirt = triks;
	int listlen = my_list_len(triks);
	int bigger = find_bigger(triks);
	int i = 0;

	if (ac == 1)
		return (0);
	if (is_list_sorted(triks, listlen) == 1)
		return (0);
	triks = NULL;
	while (is_list_sorted(triks, listlen) != 1) {
		if (i == 0)
			print_pa(skirt, i);
		bigger = find_bigger(skirt);
		skirt = bigger_first(skirt, bigger);
		if (skirt != NULL) {
			my_putstr("pa ");
			my_put_in_list_first(&triks, skirt->number);
			my_remove_from_list_first(&skirt);
		}
		i = i + 1;
	}
	return (0);
}
