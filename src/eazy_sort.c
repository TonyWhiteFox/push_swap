/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eazy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:59:46 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:26:43 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		eazy_sort3_p2(t_push *a)
{
	if (a->st1[1] > a->st1[2])
	{
		ft_com(sa, "sa\n", a);
		ft_com(rra, "rra\n", a);
	}
	else if (a->st1[1] < a->st1[2] && a->st1[0] > a->st1[2])
		ft_com(ra, "ra\n", a);
	else if (a->st1[0] < a->st1[2])
		ft_com(sa, "sa\n", a);
}

void		eazy_sort3(t_push *a)
{
	if (a->st1[0] < a->st1[1])
	{
		if (a->st1[2] < a->st1[0])
			ft_com(rra, "rra\n", a);
		else if (a->st1[2] < a->st1[1])
		{
			ft_com(rra, "rra\n", a);
			ft_com(sa, "sa\n", a);
		}
	}
	else
		eazy_sort3_p2(a);
}

void		eazy_sort4_p2(t_push *a)
{
	if (a->st1[2] < a->st1[0] && a->st1[2] < a->st1[1] && a->st1[2] < a->st1[3])
	{
		ft_com(ra, "ra\n", a);
		ft_com(ra, "ra\n", a);
		eazy_sort(a);
	}
	else
	{
		ft_com(rra, "rra\n", a);
		eazy_sort(a);
	}
}

void		eazy_sort4(t_push *a)
{
	if (a->st1[0] < a->st1[1] && a->st1[0] < a->st1[2] && a->st1[0] < a->st1[3])
	{
		ft_com(pb, "pb\n", a);
		eazy_sort(a);
		ft_com(pa, "pa\n", a);
	}
	else if (a->st1[1] < a->st1[0] && a->st1[1] < a->st1[2] &&
			a->st1[1] < a->st1[3])
	{
		ft_com(ra, "ra\n", a);
		eazy_sort(a);
	}
	else
		eazy_sort4_p2(a);
}

void		eazy_sort5(t_push *a)
{
	findmid(a->st1, a->si1, a);
	next_6sort(a);
	eazy_sort(a);
	if (a->st2[0] < a->st2[1])
		ft_com(sb, "sb\n", a);
	ft_com(pa, "pa\n", a);
	ft_com(pa, "pa\n", a);
}
