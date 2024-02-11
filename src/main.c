/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:34:38 by tali              #+#    #+#             */
/*   Updated: 2024/02/10 23:24:15 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void	ft_handler(t_ptr *d, char *s)
{
		if (s[0] == 'D')
			d->f = 1;
		else if (s[0] == 'J' && s[1] == '1')
			d->f = 1;
		else if (s[0] == 'J' && s[1] == '2')
			d->f = 2;
		else if (s[0] == 'J' && s[1] == '3')
			d->f = 4;
		else if (s[0] == 'J' && s[1] == '4')
			d->f = 5;
		else if (s[0] == 'M' && s[1] == 'B')
			d->f = 3;
		else if (s[0] == 'B' && s[1] == 'S')
			d->f = 6;
		else
		{
			printf("available option : D, J1, J2, J3, J4, MB, BS\n");
			exit_hook(&(*d));
		}

}

int	main(int ac, char **av)
{
	t_ptr	d;

	d.b = 0;
	d.f = 1;
	d.a = 1;
	d.s = 0;
	d.color = 9999999999999;
	if (ac == 2)
	{
		d.mlx_ptr = mlx_init();
		d.win_ptr = mlx_new_window(d.mlx_ptr, WITDH, HEIGH, "Fractol");
		d.img.image = mlx_new_image(d.mlx_ptr, WITDH, HEIGH);
		d.img.data = mlx_get_data_addr(d.img.image, &(d.img.bpp),
				&(d.img.size_line), &(d.img.type));
		ft_handler(&d, av[1]);
		mlx_loop_hook(d.mlx_ptr, &ft_render1, &d);
		mlx_key_hook(d.win_ptr, &ft_key_input, &d);
		mlx_mouse_hook(d.win_ptr, &ft_mouse_input, &d);
		mlx_hook(d.win_ptr, DestroyNotify, StructureNotifyMask, exit_hook, &d);
		mlx_loop(d.mlx_ptr);
	}
	else if (ac > 2)
		printf("Only one option can be set\n");
	else
		printf("available option : D, J1, J2, J3, J4, MB, BS\n");
	return (0);
}
