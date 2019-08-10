/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:32:59 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/11 18:33:24 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		print_arrs(t_push *a)
{
	int		i;

	i = 0;
	ft_printf("\n\nStack A	");
	while (i < a->si1)
	{
		ft_printf("%i ", a->st1[i]);
		i++;
	}
	ft_printf("\nStack B	");
	i = 0;
	while (i < a->si2)
	{
		ft_printf("%i ", a->st2[i]);
		i++;
	}
	ft_printf("\n\n");
}

int			check_check(t_push *a)
{
	int		j;

	j = 0;
	if (a->si2)
		return (0);
	while (j < a->si1 - 1)
	{
		if (a->st1[j] > a->st1[j + 1])
			return (0);
		j++;
	}
	return (1);
}

int			key_2press(int key, t_push *a)
{
	if (key == 53)
		by_by_by_by(a);
	return (0);
}

void		go_check_it2(t_push *a)
{
	if (ft_strequ(a->str, "ra"))
		ra(a);
	else if (ft_strequ(a->str, "pb"))
		pb(a);
	else if (ft_strequ(a->str, "rb"))
		rb(a);
	else if (ft_strequ(a->str, "rr"))
		rr(a);
	else if (ft_strequ(a->str, "rra"))
		rra(a);
	else if (ft_strequ(a->str, "rrb"))
		rrb(a);
	else if (ft_strequ(a->str, "rrr"))
		rrr(a);
	else
	{
		ft_printf("Invalid comand\n");
		by_by(a);
	}
}

void		get_color(t_push *a)
{
	a->color = 0xFF00;
	a->color2 = 0xFFFF00;
	if (a->cg < a->si1)
	{
		a->cd = find_position(a->st1, a);
		if (a->cg != 0 && a->st1[a->cg - 1] > a->st1[a->cg])
			a->color = 0xFF0000;
	}
	else
		a->cd = 0;
	if (a->cg < a->si2)
	{
		a->ce = find_position(a->st2, a);
		if (a->cg != 0 && a->st2[a->cg - 1] < a->st2[a->cg])
			a->color2 = 0xFF0000;
	}
	else
		a->ce = 0;
	if (a->it_sort)
	{
		a->color2 = 0xFF0000;
		a->ce = a->cd;
	}
}
