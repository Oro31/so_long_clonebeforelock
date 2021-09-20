/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:50:30 by rvalton           #+#    #+#             */
/*   Updated: 2021/09/17 20:54:24 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(int e)
{
	ft_putstr("Error\n");
	if (e == 1)
		perror("Initialisation before parsing failed");
	else if (e == 2)
		perror("Opening file failed");
	else if (e == 3)
	{
		ft_putstr("Map is not playable: Map must have at least 1 exit (E),");
		ft_putstr("1 collectible (C) and 1 starting position (P)\n");
	}
	else if (e == 4)
		perror("Loading xpm files failed");
	else if (e == 5)
	{
		ft_putstr("Map contain bad characters: Map can only be composed of 5");
		ft_putstr(" possibles characters, 0 (empty space), 1 (walls), C (col");
		ft_putstr("lectible) E (map exit) and P (player starting position)\n");
	}
	else if (e == 6 || e == 7)
		ft_putstr("Map is not rectangular or not surrounded by walls\n");
	else if (e == 8)
		ft_putstr("Not enought argument\n");
	else if (e == 9)
		ft_putstr("Map file's name is not correct (must be a .ber file)\n");
}
