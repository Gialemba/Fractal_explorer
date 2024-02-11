/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:33:35 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:33:36 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_render1(t_ptr *data)
{
	if (data->f == 1)
	{
		if (data->s == 0)
		{
			data->i_max = 50;
			data->c_r = 0.285;
			data->c_i = 0.01;
			data->z_r = 0;
			data->z_i = 0;
			data->x1 = -1.5;
			data->x2 = 1.5;
			data->y1 = -1.5;
			data->y2 = 1.5;
			data->zoom_y = HEIGH / (data->y2 - data->y1);
			data->zoom_x = WITDH / (data->x2 - data->x1);
			data->s = 1;
		}
		ft_render_julia1(&(*data));
	}
	return (ft_render2(&(*data)));
}

int	ft_render2(t_ptr *data)
{
	if (data->f == 2)
	{
		if (data->s == 0)
		{
			data->i_max = 50;
			data->c_r = 0.25;
			data->c_i = 0.5;
			data->z_r = 0;
			data->z_i = 0;
			data->x1 = -1.5;
			data->x2 = 1.5;
			data->y1 = -1.5;
			data->y2 = 1.5;
			data->zoom_y = HEIGH / (data->y2 - data->y1);
			data->zoom_x = WITDH / (data->x2 - data->x1);
			data->s = 1;
		}
		ft_render_julia2(&(*data));
	}
	return (ft_render3(&(*data)));
}

int	ft_render3(t_ptr *data)
{
	if (data->f == 3)
	{
		if (data->s == 0)
		{
			data->i_max = 1000;
			data->x1 = -2.1;
			data->x2 = 0.6;
			data->y1 = -1.2;
			data->y2 = 1.2;
			data->z_r = 0;
			data->z_i = 0;
			data->c_r = 0;
			data->c_i = 0;
			data->zoom_y = HEIGH / (data->y2 - data->y1);
			data->zoom_x = WITDH / (data->x2 - data->x1);
			data->s = 1;
		}
		ft_render_mandelbrot(&(*data));
	}
	return (ft_render4(&(*data)));
}

int	ft_render4(t_ptr *data)
{
	if (data->f == 4)
	{
		if (data->s == 0)
		{
			data->i_max = 50;
			data->c_r = -0.4;
			data->c_i = 0.6;
			data->z_r = 0;
			data->z_i = 0;
			data->x1 = -1.5;
			data->x2 = 1.5;
			data->y1 = -1.5;
			data->y2 = 1.5;
			data->zoom_y = HEIGH / (data->y2 - data->y1);
			data->zoom_x = WITDH / (data->x2 - data->x1);
			data->s = 1;
		}
		ft_render_julia3(&(*data));
	}
	return (ft_render5(&(*data)));
}

int	ft_render5(t_ptr *data)
{
	if (data->f == 5)
	{
		if (data->s == 0)
		{
			data->i_max = 50;
			data->c_r = -1.476;
			data->c_i = 0;
			data->x1 = -1.5;
			data->x2 = 1.5;
			data->y1 = -1.5;
			data->y2 = 1.5;
			data->zoom_y = HEIGH / (data->y2 - data->y1);
			data->zoom_x = WITDH / (data->x2 - data->x1);
			data->s = 1;
		}
		ft_render_julia4(&(*data));
	}
	return (ft_render6(&(*data)));
}
