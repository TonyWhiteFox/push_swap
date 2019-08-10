/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   by_by.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:36:02 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/11 18:07:22 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		by_by_by_by_by(t_push *a)
{
	if (a->si2 == 0 && check_check(a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int			by_by(t_push *a)
{
	if (a->win)
	{
		print_arrs(a);
		ft_printf("Comands: %i\n\n", a->cb);
		if (a->si2 == 0 && check_check(a))
		{
			a->it_sort = 1;
			ft_printf("OK\n");
		}
		else
			ft_printf("KO\n");
		print_stack(a);
		mlx_hook(a->win_ptr, 2, 2, key_2press, a);
		mlx_hook(a->win_ptr, 17, 17, by_by_by_by, a);
		mlx_loop(a->mlx_ptr);
	}
	else
		by_by_by_by_by(a);
	exit(0);
	return (0);
}

int			by_by_by(t_push *a)
{
	a->win = 0;
	mlx_destroy_window(a->mlx_ptr, a->win_ptr);
	while (a->gnl)
		go_check_it(a);
	return (0);
}

int			by_by_by_by(t_push *a)
{
	free(a);
	exit(0);
	return (0);
}
