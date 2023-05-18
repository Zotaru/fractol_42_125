/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_dezoom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonier <amonier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:51:07 by amonier           #+#    #+#             */
/*   Updated: 2023/05/10 23:11:45 by amonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	julia_dezoom(t_vars *mlx, t_data *img, t_scale *axe)
{
	axe->x_min = axe->x_min * 1.01;
	axe->x_max = axe->x_max * 1.01;
	axe->y_min = axe->y_min * 1.01;
	axe->y_max = axe->y_max * 1.01;
	clear_image(img);
	my_mlx_julia_fract(img, mlx->julia_x, mlx->julia_y, *axe);
	mlx_put_image_to_window(mlx->mlx, mlx->win, img->img, 0, 0);
	return ;
}
