/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 17:24:24 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/11 17:58:38 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pix_initialize_ch(t_push *a)
{
	if (a->size >= 1000)
		a->pix = 1;
	else if (a->size >= 400)
		a->pix = 2;
	else if (a->size >= 200)
		a->pix = 4;
	else if (a->size >= 90)
		a->pix = 8;
	else
		a->pix = 16;
	if (a->size < 1000)
		a->pix /= 2;
	a->s_x = a->pix * a->size * 2;
	a->s_y = a->pix * a->size;
	a->cg = a->s_y;
	a->coef = 1;
	while (a->cg > 256)
	{
		a->cg /= 2;
		a->coef *= 2;
	}
}

void		initialize_ch(t_push *a)
{
	a->cb = 0;
	a->si1 = a->size;
	a->si2 = 0;
	a->cd = 0;
	a->it_sort = 0;
	if (a->win == 1)
	{
		pix_initialize_ch(a);
		a->mlx_ptr = mlx_init();
		a->win_ptr = mlx_new_window(a->mlx_ptr, a->s_x, a->s_y, "check");
		a->img_ptr = mlx_new_image(a->mlx_ptr, a->s_x, a->s_y);
		a->img_adr = mlx_get_data_addr(a->img_ptr, &a->bpp,
						&a->stride, &a->endian);
		a->bpp /= 8;
		print_stack(a);
		mlx_loop_hook(a->mlx_ptr, go_check_it, a);
		mlx_hook(a->win_ptr, 2, 2, key_press, a);
		mlx_hook(a->win_ptr, 17, 17, by_by_by, a);
		mlx_loop(a->mlx_ptr);
	}
	else
		while (1)
			go_check_it(a);
}

int			main(int ac, char **av)
{
	t_push	*a;

	if (ac < 2)
		return (ft_printf("Give me array please\n"));
	if (!(a = (t_push *)malloc(sizeof(t_push))))
		return (ft_printf("Memory not worcking\n"));
	a->ca = 1;
	a->win = 0;
	if (ft_strlen(av[1]) > 1 && av[1][0] == '-' && av[1][1] == 'v')
	{
		a->ca++;
		a->win++;
	}
	a->cb = 0;
	a->cc = 0;
	a->str = ft_strnew(1);
	if (!split_av(ac, av, a))
		initialize_ch(a);
	exit(0);
	return (0);
}
