/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:58:19 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/07 21:09:34 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pb(t_push *a)
{
	int		i;

	if (a->si1 > 0)
	{
		i = a->si2;
		while (i)
		{
			a->st2[i] = a->st2[i - 1];
			i--;
		}
		a->si2++;
		a->st2[0] = a->st1[0];
		a->si1--;
		ft_memcpy(a->st1, &a->st1[1], sizeof(int) * (a->si1));
	}
}

void		pa(t_push *a)
{
	int		i;

	if (a->si2 > 0)
	{
		i = a->si1;
		while (i)
		{
			a->st1[i] = a->st1[i - 1];
			i--;
		}
		a->si1++;
		a->st1[0] = a->st2[0];
		a->si2--;
		ft_memcpy(a->st2, &a->st2[1], sizeof(int) * (a->si2));
	}
}

void		ra(t_push *a)
{
	int		i;
	int		t;

	if (a->si1 > 1)
	{
		t = a->st1[0];
		i = 0;
		ft_memcpy(a->st1, &a->st1[1], sizeof(int) * (a->si1 - 1));
		a->st1[a->si1 - 1] = t;
	}
}

void		rb(t_push *a)
{
	int		i;
	int		t;

	if (a->si2 > 1)
	{
		t = a->st2[0];
		i = 0;
		ft_memcpy(a->st2, &a->st2[1], sizeof(int) * (a->si2 - 1));
		a->st2[a->si2 - 1] = t;
	}
}

void		rr(t_push *a)
{
	ra(a);
	rb(a);
}
