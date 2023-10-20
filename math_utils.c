/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:53:33 by btomlins          #+#    #+#             */
/*   Updated: 2023/10/20 15:53:42 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double scale(double unscaled_num, double new_min, double new_max,
double old_min, double old_max)
{
    return (new_max - new_min) * (unscaled_num - old_min) / 
    (old_max - old_min) + new_min;
}