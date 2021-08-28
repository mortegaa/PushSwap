/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:01:28 by mortega-          #+#    #+#             */
/*   Updated: 2021/08/25 16:43:45 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_num	a;
	t_num	b;

	if (argc < 1)
		return (-1);
	else if (argc < 2)
		exit_mess("Error\nInsufficient arguments.\nPlease introduce any number\n");
	a.len = check_input(argv);
	a.stack = (int *)malloc(sizeof(int) * a.len);
	b.stack = (int *)malloc(sizeof(int) * a.len);
	b.len = 0;
	fill_stack(&a, argv, a.len);
	//print_stack(a, b);
	check_stack(&a, &b);
	if (a.len < 4)
		short_alg_3(&a, search_max(&a));
	else if (a.len < 6)
		short_alg_5(&a, &b);
	else
		algorithm(&a, &b);
	//print_stack(a, b);
	return (1);
}
