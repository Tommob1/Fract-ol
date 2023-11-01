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
#define FRACTOL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minilibx/mlx.h"
#include "libft/libft.h"

#define ERROR_MESSAGE "Please enter \
        \n\t\"./fractol mandelbrot\"./fractol julia <value_1> <value_2>\"\n"

#define WIDTH   800
#define HEIGHT  800

// COLORS
#define BLACK       0x000000
#define WHITE       0xFFFFFF
#define RED         0xFF0000
#define GREEN       0x00FF00
#define BLUE        0x0000FF

// Psychedelic colors
#define MAGENTA_BURST   0xFF00FF
#define LIME_SHOCK      0xCCFF00
#define NEON_ORANGE     0xFF6600
#define PSYCHEDELIC_PURPLE 0x660066
#define AQUA_DREAM      0x33CCCC
#define HOT_PINK        0xFF66B2
#define ELECTRIC_BLUE   0x0066FF
#define LAVA_RED        0xFF3300

typedef struct  s_complex
{
    double  x;
    double  y;
}                t_complex;


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

    double  escape_value;
    int     iterations_definition;

}           t_fractal;

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void    fractal_init(t_fractal *fractal);
void    fractal_render(t_fractal *fractal);
double map(double unscaled_num, double new_min, double new_max,
double old_min, double old_max);
t_complex   sum_complex(t_complex z1, t_complex z2);
t_complex   square_complex(t_complex z);

#endif