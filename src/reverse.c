/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 15:24:07 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/10 15:49:31 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rra(t_push *a)
{
	int		i;
	int		t;

	if (a->si1 > 1)
	{
		i = a->si1 - 1;
		t = a->st1[i];
		while (i)
		{
			a->st1[i] = a->st1[i - 1];
			i--;
		}
		a->st1[i] = t;
	}
}

void		rrb(t_push *a)
{
	int		i;
	int		t;

	if (a->si2 > 1)
	{
		i = a->si2 - 1;
		t = a->st2[i];
		while (i)
		{
			a->st2[i] = a->st2[i - 1];
			i--;
		}
		a->st2[i] = t;
	}
}

void		rrr(t_push *a)
{
	rra(a);
	rrb(a);
}
