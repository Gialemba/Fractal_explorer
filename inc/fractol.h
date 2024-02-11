/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:30:48 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:46:10 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"
# include <math.h>
# include "ft_printf.h"

# define WITDH 1080
# define HEIGH 720

typedef struct s_ptr
{
	long double	z_r;
	long double	z_i;
	long double	s_x;
	long double	s_y;
	long double	x1;
	long double	x2;
	long double	y1;
	long double	y2;
	t_xvar		*mlx_ptr;
	void		*win_ptr;
	long double	c_r;
	long double	c_i;
	long double	zoom_x;
	long double	zoom_y;
	int			a;
	int			old_a;
	int			b;
	int			f;
	int			s;
	int			i_max;
	long long	color;
	char		**buddha;
	t_img		img;
}				t_ptr;

int		ft_mouse_input(int button, int x, int y, t_ptr *data);
void	img_pix_put(t_ptr *data, int x, int y, int color);
int		exit_hook(t_ptr *data);
int		ft_render1(t_ptr *data);
int		ft_render2(t_ptr *data);
int		ft_render3(t_ptr *data);
int		ft_render4(t_ptr *data);
int		ft_render5(t_ptr *data);
int		ft_render6(t_ptr *data);
int		ft_key_input(int keysym, t_ptr *data);
int		ft_key_input2(int keysym, t_ptr *data);
int		ft_key_input3(int keysym, t_ptr *data);
int		ft_key_input4(int keysym, t_ptr *data);
int		ft_key_input5(int keysym, t_ptr *d);
int		ft_render_mandelbrot(t_ptr *data);
int		ft_render_burningS(t_ptr *data);
int		ft_render_julia1(t_ptr *data);
int		ft_render_julia2(t_ptr *data);
int		ft_render_julia3(t_ptr *data);
int		ft_render_julia4(t_ptr *data);
int		ft_b_julia(t_ptr *d);
int		ft_b_mandel(t_ptr *d);
int		ft_buddhabrot(t_ptr *data);
int		ft_b_burningS(t_ptr *d);
int		ft_julia_form(t_ptr *d);
int		ft_mandel_form(t_ptr *d);
int		ft_burningS_form(t_ptr *d);
void	ft_zoom_space(int x, int y, t_ptr *data);
void	ft_zoom_mouse(int x, int y, t_ptr *d);
void	ft_dezoom_ctrl(int x, int y, t_ptr *data);
void	ft_dezoom_mouse(int x, int y, t_ptr *d);
void	ft_x_y_center(int x, int y, t_ptr *data);

#endif
