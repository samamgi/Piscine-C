/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdoe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:55:16 by chdoe             #+#    #+#             */
/*   Updated: 2024/07/07 18:07:52 by chdoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 4

int	tabgd(int tabl[N][N], int li, int restr);

int	tabdg(int tabl[N][N], int li, int restr);

int	tabhb(int tabl[N][N], int col, int restr);

int	tabbh(int tabl[N][N], int col, int restr);

int	nop_suite(int tabl[N][N], int liconu[3], int rules[N][N], int lico[4])
{
	lico[0] = 1;
	lico[1] = 1;
	lico[2] = 1;
	lico[3] = 1;
	tabl[liconu[0]][liconu[1]] = liconu[2];
	if (liconu[1] == N - 1)
	{
		lico[0] = tabgd(tabl, liconu[0], rules[2][liconu[0]]);
		lico[1] = tabdg(tabl, liconu[0], rules[3][liconu[0]]);
	}
	if (liconu[0] == N - 1)
	{
		lico[2] = tabhb(tabl, liconu[1], rules[0][liconu[1]]);
		lico[3] = tabbh(tabl, liconu[1], rules[1][liconu[1]]);
	}
	tabl[liconu[0]][liconu[1]] = 0;
	return (lico[0] && lico[1] && lico[2] && lico[3]);
}

int	nop(int tabl[N][N], int liconu[3], int rules[N][N])
{
	int	lico[4];
	int	x;
	int	y;

	x = 0;
	while (x < N)
	{
		if (tabl[liconu[0]][x] == liconu[2])
		{
			return (0);
		}
		x++;
	}
	y = 0;
	while (y < N)
	{
		if (tabl[y][liconu[1]] == liconu[2])
		{
			return (0);
		}
		y++;
	}
	return (nop_suite(tabl, liconu, rules, lico));
}
