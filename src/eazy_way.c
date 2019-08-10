/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eazy_way.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:10:15 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:45:38 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		eazy_way(int *arr, int mid, int size, t_push *a)
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
	if (first_way(arr, mid, a->num, 0) < seconf_way(arr, mid, a->num, size))
		a->way = 1;
	else
		a->way = 2;
}

void		ft_do1(t_push *a)
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

void		ft_do2(t_push *a)
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

int			first_2way(int *arr, int mid, int j, int i)
{
	while (j)
	{
		if (arr[i] > mid)
			j--;
		i++;
	}
	return (i);
}

int			check_2sort2(t_push *a)
{
	int		j;

	j = 0;
	while (j < a->si2 - 1)
	{
		if (a->st2[j] < a->st2[j + 1])
			return (1);
		j++;
	}
	return (0);
}
