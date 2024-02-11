/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_frac2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:33:16 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:33:25 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_b_burningS(t_ptr *d)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	while (y < HEIGH)
	{
		d->c_i = y / d->zoom_y + d->y1;
		d->z_i = y;
		x = 0;
		while (x < WITDH)
		{
			d->c_r = x / d->zoom_x + d->x1;
			d->z_r = x;
			i = ft_burningS_form(&(*d));
			if (i == d->i_max)
				img_pix_put(&(*d), x, y, 0x00FFFFFF);
			else
				img_pix_put(&(*d), x, y, i * d->color / 200);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(d->mlx_ptr, d->win_ptr, d->img.image, 0, 0);
	return (0);

}
