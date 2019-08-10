/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_6sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:27:02 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:33:17 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		next_6sort(t_push *a)
{
	eazy_6way(a->st1, a->mid, a->si1, a);
	a->hero_way[a->hero_sword] = a->num;
	a->hero_sword++;
	if (a->way == 1)
		ft_6do1(a);
	else
		ft_6do2(a);
}

void		eazy_6way(int *arr, int mid, int size, t_push *a)
{
	int		i;

	i = 0;
	a->num = 0;
	while (i < size)
	{
		if (arr[i] < mid)
			a->num++;
		i++;
	}
	if (first_6way(arr, mid, a->num, 0) < seconf_6way(arr, mid, a->num, size))
		a->way = 1;
	else
		a->way = 2;
}

void		ft_6do1(t_push *a)
{
	while (a->num)
	{
		if (a->num == 1 && a->si1 > 1 && a->st1[1] < a->mid)
		{
			ft_com(sa, "sa\n", a);
			ft_com(pb, "pb\n", a);
			a->num--;
		}
		else if (a->st1[0] < a->mid)
		{
			ft_com(pb, "pb\n", a);
			a->num--;
		}
		else
			ft_com(ra, "ra\n", a);
	}
}

void		ft_6do2(t_push *a)
{
	while (a->num)
	{
		if (a->num == 1 && a->si1 > 1 && a->st1[1] < a->mid)
		{
			ft_com(sa, "sa\n", a);
			ft_com(pb, "pb\n", a);
			a->num--;
		}
		else
		{
			if (a->st1[0] < a->mid)
			{
				ft_com(pb, "pb\n", a);
				a->num--;
			}
			if (a->num)
				ft_com(rra, "rra\n", a);
		}
	}
}
