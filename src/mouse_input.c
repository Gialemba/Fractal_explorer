/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:35:05 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:35:06 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void	ft_x_y_center(int x, int y, t_ptr *data)
{
	double	n_x;
	double	n_y;

	n_x = (x - WITDH / 2);
	n_y = (y - HEIGH / 2);
	data->x1 += n_x / data->zoom_x;
	data->y1 += n_y / data->zoom_y;
}

int	ft_mouse_input(int button, int x, int y, t_ptr *data)
{
	if (button == 4)
		ft_zoom_mouse(x, y, &(*data));
	if (button == 5)
		ft_dezoom_mouse(x, y, &(*data));
	if (button == 1)
		ft_x_y_center(x, y, &(*data));
	return (0);
}
