/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:58:40 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:47:40 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_sort2(t_push *a)
{
	int		j;

	j = 0;
	while (j < a->si1 - 1)
	{
		if (a->st1[j] > a->st1[j + 1])
			return (1);
		j++;
	}
	return (0);
}

void		eazy_sort(t_push *a)
{
	if (check_sort2(a))
	{
		if (a->si1 == 2 && a->st1[0] > a->st1[1])
			ft_com(sa, "sa\n", a);
		if (a->si1 == 3)
			eazy_sort3(a);
		if (a->si1 == 4)
			eazy_sort4(a);
		if (a->si1 == 5)
			eazy_sort5(a);
	}
}

void		initialize_ps(t_push *a)
{
	int		i;

	i = 0;
	a->hero_sword = 0;
	a->si1 = a->size;
	a->si2 = 0;
	a->str = ft_strnew(1);
	a->hero_way = (int *)malloc(sizeof(int) * 500);
	ft_bzero(a->hero_way, sizeof(int) * 500);
	if (!(check_sort2(a)))
		exit(0);
	if (a->si1 < 6)
		eazy_sort(a);
	else
		medium_sort(a);
	check_answer(a);
}

int			main(int ac, char **av)
{
	t_push	*a;

	if (ac < 2)
		return (ft_printf("Give me array please\n"));
	if (!(a = (t_push *)malloc(sizeof(t_push))))
		return (ft_printf("Memory not worcking\n"));
	a->ca = 1;
	a->cb = 0;
	a->cc = 0;
	a->str = ft_strnew(1);
	if (!split_av(ac, av, a))
		initialize_ps(a);
	exit(0);
	return (0);
}
