/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_6way.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnor- <ldonnor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:30:12 by ldonnor-          #+#    #+#             */
/*   Updated: 2019/07/12 18:32:51 by ldonnor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			first_6way(int *arr, int mid, int j, int i)
{
	while (j)
	{
		if (arr[i] < mid)
			j--;
		i++;
	}
	return (i);
}

int			seconf_6way(int *arr, int mid, int j, int size)
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
