/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:33:43 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:33:44 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_render6(t_ptr *data)
{
	if (data->f == 6)
	{
		if (data->s == 0)
		{
			data->i_max = 256;
			data->c_r = 0;
			data->c_i = 0;
			data->z_r = 0;
			data->z_i = 0;
			data->x1 = -1.6;
			data->y1 = -0.1;
			data->x2 = -1.8;
			data->y2 = 0.1;
			data->zoom_y = HEIGH / (data->y2 - data->y1);
			data->zoom_x = WITDH / (data->x2 - data->x1);
			data->s = 1;
		}
		ft_render_burningS(&(*data));
	}
	return (1);
}
