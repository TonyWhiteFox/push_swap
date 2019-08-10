/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eazy_2sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:12:11 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/10 15:44:41 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		eazy_2sort3_p2(t_push *a)
{
	if (a->st2[1] < a->st2[2])
	{
		ft_com(sb, "sb\n", a);
		ft_com(rrb, "rrb\n", a);
	}
	else if (a->st2[1] > a->st2[2] && a->st2[0] < a->st2[2])
		ft_com(rb, "rb\n", a);
	else if (a->st2[0] > a->st2[2])
		ft_com(sb, "sb\n", a);
}

void		eazy_2sort3(t_push *a)
{
	if (a->st2[0] > a->st2[1])
	{
		if (a->st2[2] > a->st2[0])
			ft_com(rrb, "rrb\n", a);
		else if (a->st2[2] > a->st2[1])
		{
			ft_com(rrb, "rrb\n", a);
			ft_com(sb, "sb\n", a);
		}
	}
	else
		eazy_2sort3_p2(a);
}

void		eazy_2sort4_p2(t_push *a)
{
	if (a->st2[2] > a->st2[0] && a->st2[2] > a->st2[1] && a->st2[2] > a->st2[3])
	{
		ft_com(rb, "rb\n", a);
		ft_com(rb, "rb\n", a);
		eazy_2sort(a);
	}
	else
	{
		ft_com(rrb, "rrb\n", a);
		eazy_2sort(a);
	}
}

void		eazy_2sort4(t_push *a)
{
	if (a->st2[0] > a->st2[1] && a->st2[0] > a->st2[2] && a->st2[0] > a->st2[3])
	{
		ft_com(pa, "pa\n", a);
		eazy_2sort(a);
		ft_com(pb, "pb\n", a);
	}
	else if (a->st2[1] > a->st2[0] && a->st2[1] > a->st2[2] &&
			a->st2[1] > a->st2[3])
	{
		ft_com(rb, "rb\n", a);
		eazy_2sort(a);
	}
	else
		eazy_2sort4_p2(a);
}

void		eazy_2sort5(t_push *a)
{
	findmid(a->st2, a->si2, a);
	next_2sort(a);
	eazy_2sort(a);
	if (a->st1[0] > a->st1[1])
		ft_com(sa, "sa\n", a);
}
