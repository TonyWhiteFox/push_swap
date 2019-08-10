/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5do.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:19:04 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:45:53 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_5do_in(t_push *a)
{
	if (a->num == 1 && a->st2[0] < a->mid && a->st2[1] >= a->mid)
	{
		a->cb++;
		ft_com(sb, "sb\n", a);
		ft_com(pa, "pa\n", a);
		a->num--;
		a->hero_way[a->hero_sword]--;
		return (0);
	}
	else if (a->st2[0] >= a->mid)
	{
		a->cb++;
		ft_com(pa, "pa\n", a);
		a->num--;
		a->hero_way[a->hero_sword]--;
		return (0);
	}
	else
	{
		ft_com(rb, "rb\n", a);
		return (1);
	}
}

void		ft_5do(t_push *a)
{
	int		i;

	i = 0;
	while (a->num)
		if (ft_5do_in(a))
			i++;
	while (i && a->hero_sword)
	{
		i--;
		ft_com(rrb, "rrb\n", a);
	}
}

void		eazy_4sort(t_push *a)
{
	if (a->cb > 1 && !(a->st1[0] < a->st1[1] && a->st1[1] < a->st1[2]))
	{
		if (a->cb == 2 && a->st1[0] > a->st1[1])
			ft_com(sa, "sa\n", a);
		if (a->cb == 3)
			eazy_4sort3(a);
	}
}

void		eazy_4sort3(t_push *a)
{
	if (a->st1[0] < a->st1[1])
	{
		if (a->st1[1] > a->st1[2] && a->st1[0] < a->st1[2])
		{
			ft_com(ra, "ra\n", a);
			ft_com(sa, "sa\n", a);
			ft_com(rra, "rra\n", a);
		}
		else if (a->st1[1] > a->st1[2] && a->st1[0] > a->st1[2])
		{
			ft_com(ra, "ra\n", a);
			ft_com(sa, "sa\n", a);
			ft_com(rra, "rra\n", a);
			ft_com(sa, "sa\n", a);
		}
	}
	else
	{
		ft_com(sa, "sa\n", a);
		eazy_4sort(a);
	}
}

void		eazy_4way(int *arr, int mid, int size, t_push *a)
{
	int		i;

	i = 0;
	a->num = 0;
	while (i < size)
	{
		if (arr[i] <= mid)
			a->num++;
		i++;
	}
}
