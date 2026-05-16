/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol_bis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdoe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:19:19 by chdoe             #+#    #+#             */
/*   Updated: 2024/07/07 21:53:14 by chdoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 4

int	nop(int tabl[N][N], int liconu[3], int rules[N][N]);

int	sol_bis(int tabl[N][N], int liconu[3], int rules[N][N]);

int	sol(int tabl[N][N], int li, int col, int rules[N][N])
{
	int	liconu[3];

	liconu[0] = li;
	liconu[1] = col;
	liconu[2] = 1;
	if (liconu[0] == N)
		return (1);
	if (liconu[1] == N)
		return (sol(tabl, liconu[0] + 1, 0, rules));
	if (tabl[liconu[0]][liconu[1]] != 0)
		return (sol(tabl, liconu[0], liconu[1] + 1, rules));
	return (sol_bis(tabl, liconu, rules));
}

int	sol_bis(int tabl[N][N], int liconu[3], int rules[N][N])
{
	while (liconu[2] <= N)
	{
		if (nop(tabl, liconu, rules))
		{
			tabl[liconu[0]][liconu[1]] = liconu[2];
			if (sol(tabl, liconu[0], liconu[1] + 1, rules))
				return (1);
			tabl[liconu[0]][liconu[1]] = 0;
		}
		liconu[2]++;
	}
	return (0);
}
