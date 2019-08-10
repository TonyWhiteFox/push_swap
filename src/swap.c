/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:53:34 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/11 17:16:47 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sa(t_push *a)
{
	int		i;

	if (a->si1 > 1)
	{
		i = a->st1[0];
		a->st1[0] = a->st1[1];
		a->st1[1] = i;
	}
}

void		sb(t_push *a)
{
	int		i;

	if (a->si2 > 1)
	{
		i = a->st2[0];
		a->st2[0] = a->st2[1];
		a->st2[1] = i;
	}
}

void		ss(t_push *a)
{
	sa(a);
	sb(a);
}

void		ft_com(void (*ft_ft) (t_push *), char *str, t_push *a)
{
	if (str[0] == 's' && str[1] == 'a' && a->si2 > 1 && a->st2[0] < a->st2[1])
	{
		ss(a);
		a->temp = a->str;
		a->str = ft_strjoin(a->str, "ss\n");
		ft_strdel(&a->temp);
	}
	else if (str[0] == 's' && str[1] == 'b' && a->si1 > 1 && a->st1[0]
			> a->st1[1])
	{
		ss(a);
		a->temp = a->str;
		a->str = ft_strjoin(a->str, "ss\n");
		ft_strdel(&a->temp);
	}
	else
	{
		ft_ft(a);
		a->temp = a->str;
		a->str = ft_strjoin(a->str, str);
		ft_strdel(&a->temp);
	}
}
