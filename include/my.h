/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** prototypes
*/

#include <stdarg.h>

#ifndef MY_H
#define MY_H

typedef struct	s_triki
{
	int number;
	struct s_triki *next;
}	t_riki;

t_riki	*bigger_first(t_riki	*triks, int bigger);
t_riki	*list_init(int ac, char **av);
char	*my_strcat(char *dest, char const *src);
void	my_put_in_list_first(t_riki **triks, int number);
void	my_put_in_list_last(t_riki *triks, int number);
void	print_pa(t_riki *skirt, int i);
void	my_putstr(char *str);
int		my_remove_from_list_first(t_riki	**triks);
int		is_list_sorted(t_riki	*triks, int len);
int		my_remove_from_list_last(t_riki	*triks);
int		my_list_len(t_riki	*triks);
int		find_bigger(t_riki	*triks);
int		my_strlen(char const *str);
int		my_getnbr(char const *str);
int		main(int ac, char **av);

#endif  /* MY_H */
