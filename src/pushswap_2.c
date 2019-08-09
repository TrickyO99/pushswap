/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** 2
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

void	my_put_in_list_first(t_riki **triks, int number)
{
	t_riki	*element = malloc(sizeof(t_riki));

	element->number = number;
	element->next = (*triks);
	(*triks) = element;
}

void	my_put_in_list_last(t_riki *triks, int number)
{
	t_riki	*element = triks;

	while (element->next != NULL) {
		element = element->next;
	}
	element->next = malloc(sizeof(t_riki));
	element->next->number = number;
	element->next->next = NULL;
}

int	my_remove_from_list_first(t_riki	**triks)
{
	int	returned = 84;
	t_riki	*next_element = NULL;

	if (*triks == NULL) {
		return (returned);
	}
	next_element = (*triks)->next;
	returned = (*triks)->number;
	free(*triks);
	*triks = next_element;
	return (returned);
}

int my_remove_from_list_last(t_riki	*triks)
{
	t_riki	*element;
	int returned = 0;

	if (triks->next == NULL) {
		returned = triks->number;
		free(triks);
		return (returned);
	}
	element = triks;
	while (element->next->next != NULL) {
		element = element->next;
	}
	returned = element->next->number;
	free(element->next);
	element->next = NULL;
	return (returned);
}

int	my_list_len(t_riki	*triks)
{
	t_riki	*element = triks;
	int len = 0;

	while (element != NULL) {
		len = len + 1;
		element = element->next;
	}
	return (len);
}