/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_4sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:13:24 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:25:20 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		hard_4sort(t_push *a)
{
	while (a->si1 > 4)
	{
		findmid(a->st1, a->si1, a);
		next_sort(a);
	}
	eazy_sort(a);
	hard_5sort(a);
}

void		hard_6sort(t_push *a)
{
	a->cb = 0;
	if (a->hero_way[a->hero_sword] < 4)
	{
		while (a->hero_way[a->hero_sword])
		{
			a->hero_way[a->hero_sword]--;
			ft_com(pa, "pa\n", a);
			a->cb++;
		}
	}
	else
	{
		findmid(a->st2, a->hero_way[a->hero_sword], a);
		eazy_5way(a->st2, a->mid, a->hero_way[a->hero_sword], a);
		ft_5do(a);
	}
}

void		hard_5sort(t_push *a)
{
	while (a->hero_sword > 0 || a->hero_way[a->hero_sword] > 0)
	{
		if (a->hero_way[a->hero_sword] < 1)
			a->hero_sword--;
		hard_6sort(a);
		while (a->cb > 3)
		{
			findmid(a->st1, a->cb, a);
			next_5sort(a);
		}
		eazy_4sort(a);
	}
}

void		eazy_5way(int *arr, int mid, int size, t_push *a)
{
	int		i;

	i = 0;
	a->num = 0;
	while (i < size)
	{
		if (arr[i] >= mid)
			a->num++;
		i++;
	}
}

void		next_5sort(t_push *a)
{
	eazy_4way(a->st1, a->mid, a->cb, a);
	if (a->hero_way[a->hero_sword] > 0)
		a->hero_sword++;
	a->hero_way[a->hero_sword] = a->num;
	a->hero_sword++;
	ft_4do1(a);
}
