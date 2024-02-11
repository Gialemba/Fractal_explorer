/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:35:13 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:35:15 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void	ft_zoom_space(int x, int y, t_ptr *data)
{
	long double	n_x;
	long double	n_y;

	n_x = (x - WITDH / 2) * 1.5;
	n_y = (y - HEIGH / 2) * 1.5;
	data->zoom_x *= 1.5;
	data->zoom_y *= 1.5;
	data->x1 += n_x / data->zoom_x;
	data->y1 += n_y / data->zoom_y;
	data->x2 /= 1.5;
	data->x1 /= 1.5;
	data->y2 /= 1.5;
	data->y1 /= 1.5;
	data->i_max *= 1.25;
}

void	ft_dezoom_ctrl(int x, int y, t_ptr *data)
{
	long double	n_x;
	long double	n_y;

	n_x = (x - WITDH / 2) / 1.5;
	n_y = (y - HEIGH / 2) / 1.5;
	data->x1 -= n_x / data->zoom_x;
	data->y1 -= n_y / data->zoom_y;
	data->zoom_x /= 1.5;
	data->zoom_y /= 1.5;
	data->x2 *= 1.5;
	data->x1 *= 1.5;
	data->y2 *= 1.5;
	data->y1 *= 1.5;
	data->i_max /= 1.25;
}

void	ft_zoom_mouse(int x, int y, t_ptr *d)
{
	long double	n_x;
	long double	n_y;

	ft_x_y_center (x, y, &(*d));
	n_x = (((d->x1 + d->x2) / 2.0) * d->zoom_x) + WITDH / 2;
	n_y = (((d->y1 + d->y2) / 2.0) * d->zoom_y) + HEIGH / 2;
	n_x = (n_x - WITDH / 2) * 1.5;
	n_y = (n_y - HEIGH / 2) * 1.5;
	d->zoom_x *= 1.5;
	d->zoom_y *= 1.5;
	d->x1 += n_x / d->zoom_x;
	d->y1 += n_y / d->zoom_y;
	d->x2 /= 1.5;
	d->x1 /= 1.5;
	d->y2 /= 1.5;
	d->y1 /= 1.5;
	d->i_max *= 1.25;
}

void	ft_dezoom_mouse(int x, int y, t_ptr *d)
{
	long double	n_x;
	long double	n_y;

	ft_x_y_center (x, y, &(*d));
	n_x = (((d->x1 + d->x2) / 2.0) * d->zoom_x) + WITDH / 2;
	n_y = (((d->y1 + d->y2) / 2.0) * d->zoom_y) + HEIGH / 2;
	n_x = (n_x - WITDH / 2) / 1.5;
	n_y = (n_y - HEIGH / 2) / 1.5;
	d->x1 -= n_x / d->zoom_x;
	d->y1 -= n_y / d->zoom_y;
	d->zoom_x /= 1.5;
	d->zoom_y /= 1.5;
	d->x2 *= 1.5;
	d->x1 *= 1.5;
	d->y2 *= 1.5;
	d->y1 *= 1.5;
	d->i_max /= 1.25;
}
