/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 12:52:58 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/08 18:56:51 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			bubble_check(t_push *a)
{
	a->ca = 0;
	while (a->ca < a->cc - 1)
	{
		if (a->st3[a->ca] == a->st3[a->ca + 1])
			return (1);
		a->ca++;
	}
	return (0);
}

int			bubble(t_push *a)
{
	a->size = a->cc;
	a->ca = 0;
	if (a->overflow)
		return (1);
	while (a->ca < a->cc - 1)
	{
		a->cb = 0;
		while (a->cb < a->cc - 1)
		{
			if (a->st3[a->cb] > a->st3[a->cb + 1])
			{
				a->i_t = a->st3[a->cb];
				a->st3[a->cb] = a->st3[a->cb + 1];
				a->st3[a->cb + 1] = a->i_t;
			}
			a->cb++;
		}
		a->ca++;
	}
	return (bubble_check(a));
}

int			valid_cikl(t_push *a)
{
	if (a->str[a->cb] && (ft_isdigit(a->str[a->cb]) || (a->str[a->cb] == '+'
			&& ft_isdigit(a->str[a->cb + 1]) && (a->cb == 0 ||
			!ft_isdigit(a->str[a->cb - 1]))) || (a->str[a->cb] == '-' &&
			ft_isdigit(a->str[a->cb + 1]) && (a->cb == 0 ||
			!ft_isdigit(a->str[a->cb - 1]))) || a->str[a->cb] == 9 ||
			a->str[a->cb] == 13 || a->str[a->cb] == 32 ||
			a->str[a->cb] == ','))
	{
		if ((a->str[a->cb] == '+' || a->str[a->cb] == '-') && a->str[a->cb + 1]
				== '0' && ((a->i_t = ps_atoi(&a->str[a->cb], a)) == 0))
			return (0);
		return (1);
	}
	return (0);
}

int			check_values(t_push *a)
{
	a->st1 = (int *)malloc(sizeof(int) * a->cc);
	a->st2 = (int *)malloc(sizeof(int) * a->cc);
	a->st3 = (int *)malloc(sizeof(int) * a->cc);
	a->ca = 0;
	a->cb = 0;
	a->cc = 0;
	while (a->str[a->cb])
	{
		if (a->str[a->cb] == '+' || a->str[a->cb] == '-' ||
			(ft_isdigit(a->str[a->cb]) && (a->cb == 0 ||
				!(ft_isdigit(a->str[a->cb - 1])))))
		{
			a->st1[a->cc] = ps_atoi(&(a->str[a->cb]), a);
			a->st3[a->cc] = a->st1[a->cc];
			a->cb++;
			a->cc++;
		}
		a->cb++;
	}
	ft_strdel(&a->str);
	return (bubble(a));
}

int			split_av(int ac, char **av, t_push *a)
{
	while (a->ca < ac)
	{
		a->temp = a->str;
		a->str = ft_strjoin(a->str, av[a->ca]);
		ft_strdel(&a->temp);
		a->temp = a->str;
		a->str = ft_strjoin(a->str, " ");
		ft_strdel(&a->temp);
		a->ca++;
	}
	a->overflow = 0;
	while (valid_cikl(a))
	{
		if (ft_isdigit(a->str[a->cb]) && (a->cb == 0 ||
				!(ft_isdigit(a->str[a->cb - 1]))))
			a->cc++;
		a->cb++;
	}
	if (a->str[a->cb] || a->cc == 0 || check_values(a))
		return (ft_printf("Invalid values\n"));
	return (0);
}
