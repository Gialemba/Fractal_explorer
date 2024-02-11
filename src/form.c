/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:31:16 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:33:04 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_julia_form(t_ptr *d)
{
	long double	tmp;
	int			i;

	i = 0;
	while ((d->z_r * d->z_r + d->z_i * d->z_i) < 4 && i < d->i_max)
	{
		tmp = d->z_r;
		d->z_r = d->z_r * d->z_r - d->z_i * d->z_i + d->c_r;
		d->z_i = 2 * d->z_i * tmp + d->c_i;
		i++;
	}
	return (i);
}

int	ft_mandel_form(t_ptr *d)
{
	long double	tmp;
	int			i;

	d->z_r = 0;
	d->z_i = 0;
	i = 0;
	while ((pow(d->z_r, 2.0) + pow(d->z_i, 2.0)) < 4 && i < d->i_max)
	{
		tmp = d->z_r;
		d->z_r = pow(d->z_r, 2.0) - pow(d->z_i, 2.0) + d->c_r;
		d->z_i = 2 * d->z_i * tmp + d->c_i;
		i++;
	}
	return (i);
}

long double test(long double num)
{
	if (num < 0)
		num *= -1;
	return (num);
}

int	ft_burningS_form(t_ptr *d)
{
	long double	tmp;
	int		i;

	d->z_r = 0;
	d->z_i = 0;
	i = 0;
	while ((pow(d->z_r, 2.0) + pow(d->z_i, 2.0)) < 4 && i < d->i_max)
	{
		tmp = d->z_r;
		d->z_r = pow(d->z_r, 2.0) - pow(d->z_i, 2.0) + d->c_r;
		d->z_i = 2 * fabsl(d->z_i) * fabsl(tmp) + d->c_i;
		i++;
	}
	return i;
}
