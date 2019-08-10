/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:34:18 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/11 18:48:39 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			find_position(int *arr, t_push *a)
{
	int		i;

	i = 0;
	while (arr[a->cg] > a->st3[i])
		i++;
	return (i + 1);
}

void		get_image(t_push *a)
{
	int		i;
	int		j;

	a->cf = 0;
	while (a->cf < a->pix)
	{
		i = a->cd * a->pix;
		j = a->ce * a->pix;
		while (i)
		{
			get_nice_image(a, i);
			i--;
		}
		while (j)
		{
			if (a->it_sort)
				get_nice_image2(a, j);
			else
				get_nice_image3(a, j);
			j--;
		}
		a->cf++;
	}
}

void		print_stack(t_push *a)
{
	ft_bzero(a->img_adr, a->s_y * a->s_x * sizeof(int));
	a->cg = 0;
	while (a->cg < a->si1 || a->cg < a->si2)
	{
		get_color(a);
		get_image(a);
		a->cg++;
	}
	mlx_put_image_to_window(a->mlx_ptr, a->win_ptr, a->img_ptr, 0, 0);
}

int			key_press(int key, t_push *a)
{
	if (key == 53)
		by_by_by(a);
	return (0);
}

int			go_check_it(t_push *a)
{
	if (!(a->gnl = get_next_line(0, &a->str)))
		by_by(a);
	if (ft_strequ(a->str, "sa"))
		sa(a);
	else if (ft_strequ(a->str, "sb"))
		sb(a);
	else if (ft_strequ(a->str, "ss"))
		ss(a);
	else if (ft_strequ(a->str, "pa"))
		pa(a);
	else
		go_check_it2(a);
	a->cb++;
	ft_strdel(&a->str);
	if (a->win)
		print_stack(a);
	return (0);
}
