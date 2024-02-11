/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:31:23 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:31:24 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_render_julia2(t_ptr *data)
{
	if (data->a == 2)
		data->a = 2;
	else if (data->c_r >= 0.8)
		data->a = 1;
	else if (data->c_r <= 0.25)
		data->a = 0;
	ft_b_julia(&(*data));
	if (data->a == 1)
		data->c_r -= 0.01;
	else if (data->a == 0)
		data->c_r += 0.01;
	return (1);
}

int	ft_render_julia4(t_ptr *data)
{
	if (data->a == 2)
		data->a = 2;
	else if (data->c_r >= -1.35)
		data->a = 1;
	else if (data->c_r <= -1.476)
		data->a = 0;
	ft_b_julia(&(*data));
	if (data->a == 1)
		data->c_r -= 0.001;
	else if (data->a == 0)
		data->c_r += 0.001;
	return (1);
}

int	ft_render_julia3(t_ptr *data)
{
	if (data->a == 2)
		data->a = 2;
	else if (data->c_r <= -0.6)
		data->a = 1;
	else if (data->c_r >= -0.4)
		data->a = 0;
	ft_b_julia(&(*data));
	if (data->a == 1)
		data->c_r += 0.001;
	else if (data->a == 0)
		data->c_r -= 0.001;
	return (1);
}

int	ft_render_julia1(t_ptr *data)
{
	if (data->a == 2)
		data->a = 2;
	else if (data->c_r <= 0.2781)
		data->a = 1;
	else if (data->c_r >= 0.285)
		data->a = 0;
	ft_b_julia(&(*data));
	if (data->a == 1)
		data->c_r += 0.0001;
	else if (data->a == 0)
		data->c_r -= 0.0001;
	return (1);
}

int	ft_render_mandelbrot(t_ptr *data)
{
	ft_b_mandel(&(*data));
	return (1);
}
