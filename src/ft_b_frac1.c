/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_frac1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:31:42 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:32:09 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_b_mandel(t_ptr *d)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	while (y < HEIGH)
	{
		d->c_i = y / d->zoom_y + d->y1;
		x = 0;
		while (x < WITDH)
		{
			d->c_r = x / d->zoom_x + d->x1;
			i = ft_mandel_form(&(*d));
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

int	ft_b_julia(t_ptr *d)
{
	double	x;
	double	y;
	int		i;

	y = 0;
	while (y < HEIGH)
	{
		x = 0;
		while (x < WITDH)
		{
			d->z_r = x / d->zoom_x + d->x1;
			d->z_i = y / d->zoom_y + d->y1;
			i = ft_julia_form(&(*d));
			if (i == d->i_max)
				img_pix_put(&(*d), x, y, 0xFFFFFFFF);
			else
				img_pix_put(&(*d), x, y, i * d->color / 200);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(d->mlx_ptr, d->win_ptr, d->img.image, 0, 0);
	return (0);
}
