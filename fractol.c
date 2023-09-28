/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:15:59 by btomlins          #+#    #+#             */
/*   Updated: 2023/09/22 15:16:15 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

int main(int argc, char **argv)
{
    if (argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10) //COMPLETE
        || argc == 4 && !ft_strncmp(argv[1], "julia", 5))
    {
        
    }
    else
    {
        ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO); //COMPLETE
        exit(EXIT_FAILURE);
    }
    
}