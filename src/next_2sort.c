/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_2sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:02:50 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/10 16:04:20 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_2do1(t_push *a)
{
	while (a->num)
	{
		if (a->st2[0] > a->mid)
		{
			ft_com(pa, "pa\n", a);
			a->num--;
		}
		else
			ft_com(rb, "rb\n", a);
	}
}

void		ft_2do2(t_push *a)
{
	while (a->num)
	{
		if (a->st2[0] > a->mid)
		{
			ft_com(pa, "pa\n", a);
			a->num--;
		}
		ft_com(rrb, "rrb\n", a);
	}
}

void		next_2sort(t_push *a)
{
	eazy_2way(a->st2, a->mid, a->si2, a);
	if (a->way == 1)
		ft_2do1(a);
	else
		ft_2do2(a);
}

int			seconf_2way(int *arr, int mid, int j, int size)
{
	int		i;
	int		k;

	i = 1;
	k = 0;
	while (j)
	{
		if (arr[size - i] > mid)
		{
			k++;
			j--;
		}
		k++;
		i++;
	}
	return (k);
}

void		eazy_2way(int *arr, int mid, int size, t_push *a)
{
	int		i;

	i = 0;
	a->num = 0;
	while (i < size)
	{
		if (arr[i] > mid)
			a->num++;
		i++;
	}
	if (first_2way(arr, mid, a->num, 0) < seconf_2way(arr, mid, a->num, size))
		a->way = 1;
	else
		a->way = 2;
}
