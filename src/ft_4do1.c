/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4do1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:26:54 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:44:32 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_4do2(t_push *a)
{
	ft_com(rra, "rra\n", a);
	a->cc--;
}

void		ft_4do1(t_push *a)
{
	a->cc = 0;
	while (a->num)
	{
		if (a->num == 1 && a->cd > 1 && a->st1[1] < a->mid)
		{
			ft_com(sa, "sa\n", a);
			ft_com(pb, "pb\n", a);
			a->num--;
			a->cb--;
		}
		else if (a->st1[0] <= a->mid)
		{
			ft_com(pb, "pb\n", a);
			a->num--;
			a->cb--;
		}
		else
		{
			a->cc++;
			ft_com(ra, "ra\n", a);
		}
	}
	while (a->cc)
		ft_4do2(a);
}

int			first_way(int *arr, int mid, int j, int i)
{
	while (j)
	{
		if (arr[i] < mid)
			j--;
		i++;
	}
	return (i);
}

int			seconf_way(int *arr, int mid, int j, int size)
{
	int		i;
	int		k;

	i = 1;
	k = 0;
	while (j)
	{
		if (arr[size - i] < mid)
		{
			k++;
			j--;
		}
		k++;
		i++;
	}
	return (k);
}

void		bubble2(int *arr, int i)
{
	int		j;
	int		k;
	int		temp;

	j = 0;
	while (j < i - 1)
	{
		k = 0;
		while (k < i - 1)
		{
			if (arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
			k++;
		}
		j++;
	}
}
