/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:33:54 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:33:55 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void	img_pix_put(t_ptr *d, int x, int y, int color)
{
	char	*pixel;

	pixel = d->img.data + (y * d->img.size_line + x * (d->img.bpp / 8));
	*(int *)pixel = color;
}

int	exit_hook(t_ptr *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_image(data->mlx_ptr, data->img.image);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit(0);
}
