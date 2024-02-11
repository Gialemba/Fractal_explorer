/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:34:02 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:34:12 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_key_input(int keysym, t_ptr *data)
{
	if (keysym == XK_Left)
	{
		if (data->f - 1 == 0)
			data->f = 6;
		else
			data->f--;
		data->s = 0;
	}
	if (keysym == XK_Right)
	{
		if (data->f + 1 == 7)
			data->f = 1;
		else
			data->f++;
		data->s = 0;
	}
	if (keysym == XK_Escape)
		return (exit_hook(&(*data)));
	return (ft_key_input2(keysym, &(*data)));
}

int	ft_key_input2(int keysym, t_ptr *data)
{
	if (keysym == XK_backslash)
	{
		if (data->color == 0)
			data->color -= 1;
		data->color /= 3;
	}
	if (keysym == XK_bracketright)
	{
		if (data->color == 0)
			data->color += 1;
		data->color *= 4;
	}
	if (keysym == XK_k || keysym == XK_K)
		data->color = 9999999999999;
	if (keysym == XK_w || keysym == XK_W)
	{
		data->y1 -= data->zoom_y / (data->zoom_y * 150);
		data->y2 -= data->zoom_y / (data->zoom_y * 150);
	}
	return (ft_key_input3(keysym, &(*data)));
}

int	ft_key_input3(int keysym, t_ptr *data)
{
	if (keysym == XK_s || keysym == XK_S)
	{
		data->y1 += data->zoom_y / (data->zoom_y * 150);
		data->y2 += data->zoom_y / (data->zoom_y * 150);
	}
	if (keysym == XK_d || keysym == XK_D)
	{
		data->x1 += data->zoom_x / (data->zoom_x * 150);
		data->x2 += data->zoom_x / (data->zoom_x * 150);
	}
	if (keysym == XK_a || keysym == XK_A)
	{
		data->x1 -= data->zoom_x / (data->zoom_x * 150);
		data->x2 -= data->zoom_x / (data->zoom_x * 150);
	}
	return (ft_key_input4(keysym, &(*data)));
}

int	ft_key_input4(int keysym, t_ptr *data)
{
	if ((keysym == XK_P || keysym == XK_p))
	{
		if (data->b == 0)
		{
			data->old_a = data->a;
			data->a = 2;
			data->b = 1;
		}
		else if (data->b == 1)
		{
			data->a = data->old_a;
			data->b = 0;
		}
	}
	return (ft_key_input5(keysym, &(*data)));
}

int	ft_key_input5(int keysym, t_ptr *d)
{
	long double	c_x;
	long double	c_y;

	if (keysym == XK_space)
	{
		c_x = (((d->x1 + d->x2) / 2.0) * d->zoom_x) + WITDH / 2;
		c_y = (((d->y1 + d->y2) / 2.0) * d->zoom_y) + HEIGH / 2;
		ft_zoom_space(c_x, c_y, &(*d));
	}
	if (keysym == XK_Control_L)
	{
		c_x = (((d->x1 + d->x2) / 2.0) * d->zoom_x) + WITDH / 2;
		c_y = (((d->y1 + d->y2) / 2.0) * d->zoom_y) + HEIGH / 2;
		ft_dezoom_ctrl(c_x, c_y, &(*d));
	}
	return (0);
}
