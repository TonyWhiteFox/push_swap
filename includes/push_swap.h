/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 09:36:51 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/21 14:23:21 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include "mlx.h"
# include "math.h"
# ifdef __APPLE__
#  include <OpenCL/opencl.h>
# else
#  include <CL/cl.h>
# endif

typedef struct			s_push
{
	int					ca;
	int					cb;
	int					cc;
	int					i_t;
	char				*str;
	char				**ans;
	char				*temp;
	int					*st1;
	int					*st2;
	int					*st3;
	int					si1;
	int					si2;
	int					size;
	int					mid;
	long long int		ret;
	int					sign;
	unsigned int		check;
	int					overflow;
	int					way;
	int					num;
	int					*hero_way;
	int					hero_sword;
	void				*mlx_ptr;
	void				*win_ptr;
	void				*img_ptr;
	void				*img_adr;
	int					bpp;
	int					stride;
	int					endian;
	int					cd;
	int					ce;
	int					cf;
	int					cg;
	int					s_x;
	int					s_y;
	int					pix;
	int					gnl;
	int					win;
	int					color;
	int					color2;
	int					it_sort;
	int					coef;
}						t_push;

void					print_arrs(t_push *a);
int						check_check(t_push *a);
int						key_2press(int key, t_push *a);
void					go_check_it2(t_push *a);
void					get_color(t_push *a);

int						by_by(t_push *a);
int						by_by_by(t_push *a);
int						by_by_by_by(t_push *a);
void					by_by_by_by_by(t_push *a);

int						go_check_it(t_push *a);
int						key_press(int key, t_push *a);
void					print_stack(t_push *a);
void					get_image(t_push *a);
int						find_position(int *arr, t_push *a);

void					check_answer_p6(t_push *a);
void					hard_check_answer(t_push *a);
void					hard_check6(t_push *a, int i);
void					hard_check5(t_push *a, int i);

void					check_answer_p5(t_push *a);
void					check_answer_p4(t_push *a);
void					check_answer_p3(t_push *a);
void					check_answer_p2(t_push *a);
void					check_answer(t_push *a);

int						bubble_check(t_push *a);
int						bubble(t_push *a);
int						valid_cikl(t_push *a);
int						check_values(t_push *a);
int						split_av(int ac, char **av, t_push *a);

void					eazy_2sort3_p2(t_push *a);
void					eazy_2sort3(t_push *a);
void					eazy_2sort4_p2(t_push *a);
void					eazy_2sort4(t_push *a);
void					eazy_2sort5(t_push *a);

void					eazy_sort3_p2(t_push *a);
void					eazy_sort3(t_push *a);
void					eazy_sort4_p2(t_push *a);
void					eazy_sort4(t_push *a);
void					eazy_sort5(t_push *a);

void					eazy_way(int *arr, int mid, int size, t_push *a);
void					ft_do1(t_push *a);
void					ft_do2(t_push *a);
int						first_2way(int *arr, int mid, int j, int i);
int						check_2sort2(t_push *a);

void					eazy_2way(int *arr, int mid, int size, t_push *a);
int						seconf_2way(int *arr, int mid, int j, int size);
void					next_2sort(t_push *a);
void					ft_2do2(t_push *a);
void					ft_2do1(t_push *a);

void					ft_4do2(t_push *a);
void					ft_4do1(t_push *a);
int						first_way(int *arr, int mid, int j, int i);
int						seconf_way(int *arr, int mid, int j, int size);
void					bubble2(int *arr, int i);

int						ft_5do_in(t_push *a);
void					ft_5do(t_push *a);
void					eazy_4sort(t_push *a);
void					eazy_4sort3(t_push *a);
void					eazy_4way(int *arr, int mid, int size, t_push *a);

void					hard_4sort(t_push *a);
void					hard_6sort(t_push *a);
void					hard_5sort(t_push *a);
void					eazy_5way(int *arr, int mid, int size, t_push *a);
void					next_5sort(t_push *a);

void					hard_check1(t_push *a, int i);
void					hard_check2(t_push *a, int i);
void					hard_check3(t_push *a, int i);
void					hard_check4(t_push *a, int i);

void					pix_initialize_ch(t_push *a);
void					initialize_ch(t_push *a);

void					medium_sort(t_push *a);
void					findmid(int *arr, int i, t_push *a);
void					next_sort(t_push *a);
void					eazy_2sort(t_push *a);

int						ps_atoi(const char *str, t_push *a);
void					get_nice_image(t_push *a, int i);
void					get_nice_image2(t_push *a, int i);
void					get_nice_image3(t_push *a, int j);

int						check_sort2(t_push *a);
void					eazy_sort(t_push *a);
void					initialize_ps(t_push *a);

void					next_6sort(t_push *a);
void					eazy_6way(int *arr, int mid, int size, t_push *a);
void					ft_6do1(t_push *a);
void					ft_6do2(t_push *a);

int						first_6way(int *arr, int mid, int j, int i);
int						seconf_6way(int *arr, int mid, int j, int size);

void					pb(t_push *a);
void					pa(t_push *a);
void					ra(t_push *a);
void					rb(t_push *a);
void					rr(t_push *a);

void					rra(t_push *a);
void					rrb(t_push *a);
void					rrr(t_push *a);

void					sa(t_push *a);
void					sb(t_push *a);
void					ss(t_push *a);
void					ft_com(void (*ft_ft) (t_push *), char *str, t_push *a);

#endif
