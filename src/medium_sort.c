/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:06:29 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:35:59 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		medium_sort(t_push *a)
{
	if (a->si1 < 11)
	{
		while (a->si1 > 5)
		{
			findmid(a->st1, a->si1, a);
			next_6sort(a);
		}
		eazy_sort(a);
		if (a->si2 < 6)
		{
			eazy_2sort(a);
			while (a->si2)
				ft_com(pa, "pa\n", a);
		}
	}
	else
		hard_4sort(a);
}

void		findmid(int *arr, int i, t_push *a)
{
	int		*brr;
	int		j;

	brr = (int *)malloc(sizeof(int) * i);
	j = i;
	while (j)
	{
		brr[j - 1] = arr[j - 1];
		j--;
	}
	bubble2(brr, i);
	a->mid = brr[i / 2];
	free(brr);
}

void		next_sort(t_push *a)
{
	eazy_way(a->st1, a->mid, a->si1, a);
	a->hero_way[a->hero_sword] = a->num;
	a->hero_sword++;
	if (a->way == 1)
		ft_do1(a);
	else
		ft_do2(a);
}

void		eazy_2sort(t_push *a)
{
	if (check_2sort2(a))
	{
		if (a->si2 == 2 && a->st2[0] > a->st2[1])
			ft_com(rb, "rb\n", a);
		if (a->si2 == 3)
			eazy_2sort3(a);
		if (a->si2 == 4)
			eazy_2sort4(a);
		if (a->si2 == 5)
			eazy_2sort5(a);
	}
}
