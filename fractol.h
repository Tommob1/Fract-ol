/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract-ol.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:31:59 by btomlins          #+#    #+#             */
/*   Updated: 2023/09/04 15:32:19 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#   define FRACTOL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minilibx_macos/mlx.h"
#include "libft/libft.h"

#define ERROR_MESSAGE "Please enter \
        \n\t\"./fractol mandelbrot\"./fractol julia <value_1> <value_2>\"\n"

#define WIDTH   800
#define HEIGHT  800

typedef struct s_img
{
    void    *img_ptr;
    char    *pixels_ptr;
    int     bpp;
    int     endian;
    int     line_len;
}               t_img;


typedef struct  s_fractal
{
    char    *name;
    void    *mlx_connection;
    void    *mlx_window;

    t_img   img;

}           t_fractal;

#endif