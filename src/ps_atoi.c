/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 12:51:23 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/11 18:49:38 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ps_atoi(const char *str, t_push *a)
{
	a->ret = 0;
	a->sign = 1;
	a->check = -1;
	a->check /= 2;
	if (*str == '-')
	{
		str++;
		a->sign = -1;
	}
	if (*str == '+' && a->sign == 1)
		str++;
	while (ft_isdigit(*str))
	{
		a->ret = a->ret * 10 + (*(str++) - '0');
		if ((a->sign == -1 && a->ret > a->check + 1) ||
				(a->sign == 1 && a->ret > a->check))
			a->overflow = 1;
	}
	return (a->ret * a->sign);
}

void		get_nice_image(t_push *a, int i)
{
	if (a->color != 0xFF0000)
		*(int *)(a->img_adr + ((i + (a->cg * a->pix + a->cf)
				* a->s_x) * a->bpp)) = a->color + i / (a->coef) -
				((i / (a->coef)) << 8);
	else
		*(int *)(a->img_adr + ((i + (a->cg * a->pix + a->cf)
				* a->s_x) * a->bpp)) = a->color +
				(i / (a->coef));
}

void		get_nice_image2(t_push *a, int j)
{
	*(int *)(a->img_adr + ((-j + (a->cg * a->pix + a->cf + 1)
			* a->s_x) * a->bpp)) = a->color2 + j / (a->coef) -
			((j / (a->coef)) << 16);
}

void		get_nice_image3(t_push *a, int j)
{
	*(int *)(a->img_adr + ((-j + (a->cg * a->pix + a->cf + 1)
			* a->s_x) * a->bpp)) = a->color2 + j / (a->coef) -
			((j / (a->coef)) << 16);
}
