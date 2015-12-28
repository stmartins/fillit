/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_diez.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/27 15:39:15 by stmartin          #+#    #+#             */
/*   Updated: 2015/12/28 17:45:37 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libit.h"
#include <stdio.h>
int		check_diez(t_coord **coord, int x, int y, int valid)
{
	while (coord[x] != NULL)
	{
		if (y < 3 && coord[x][y].x == coord[x][y + 1].x && 
				coord[x][y].y == coord[x][y + 1].y + 1)
			valid++;
		if (y < 3 && coord[x][y].x == coord[x][y + 1].x && 
				coord[x][y].y == coord[x][y + 1].y - 1)
			valid++;
		if (y > 0 && coord[x][y].x == coord[x][y - 1].x && 
				coord[x][y].y == coord[x][y - 1].y - 1)
			valid++;
		if (y > 0 && coord[x][y].x == coord[x][y - 1].x &&
				coord[x][y].y == coord[x][y - 1].y + 1)
			valid++;
		if (y < 3 && coord[x][y].y == coord[x][y + 1].y && 
				coord[x][y].x == coord[x][y + 1].x + 1)
			valid++;
		if (y < 3 && coord[x][y].y == coord[x][y + 1].y && 
				coord[x][y].x == coord[x][y - 1].x - 1)
			valid++;
		if (y > 0 && coord[x][y].y == coord[x][y - 1].y && 
				coord[x][y].x == coord[x][y - 1].x - 1)
			valid++;
		if (y > 0 && coord[x][y].y == coord[x][y - 1].y &&
				coord[x][y]. x == coord[x][y - 1].x + 1)
			valid++;
		y++;
		if (y == 4)
		{
			y = 0;
			x++;
		}
	}
	printf("x = %d et y = %d octet suivant x = %d et y = %d\n", coord[0][0].x, coord[0][0].y, coord[0][1].x, coord[0][1].y);
	printf("valid = %d", valid);
	if (valid == x * 6)
		return (1);
	return (0);
}
