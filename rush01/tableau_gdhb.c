/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau_gdhb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdoe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:33:41 by chdoe             #+#    #+#             */
/*   Updated: 2024/07/07 16:45:34 by chdoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 4

// Vérifie les contraintes croissantes de gauche à droite sur une ligne
int	tabgd(int tabl[N][N], int li, int restr)
{
	int	vu;
	int	count;
	int	j;

	vu = 0;
	count = 0;
	j = 0;
	while (j < N)
	{
		if (tabl[li][j] > vu)
		{
			vu = tabl[li][j];
			count++;
		}
		j++;
	}
	return (count == restr);
}

// Vérifie les contraintes croissantes de droite à gauche sur une ligne
int	tabdg(int tabl[N][N], int li, int restr)
{
	int	vu;
	int	count;
	int	j;

	vu = 0;
	count = 0;
	j = N - 1;
	while (j >= 0)
	{
		if (tabl[li][j] > vu)
		{
			vu = tabl[li][j];
			count++;
		}
		j--;
	}
	if (count == restr)
		return (1);
	return (0);
}

// Vérifie les contraintes croissantes de haut en bas sur une colonne
int	tabhb(int tabl[N][N], int col, int restr)
{
	int	vu;
	int	count;
	int	i;

	vu = 0;
	count = 0;
	i = 0;
	while (i < N)
	{
		if (tabl[i][col] > vu)
		{
			vu = tabl[i][col];
			count++;
		}
		i++;
	}
	if (count == restr)
		return (1);
	return (0);
}

// Vérifie les contraintes croissantes de bas en haut sur une colonne
int	tabbh(int tabl[N][N], int col, int restr)
{
	int	vu;
	int	count;
	int	i;

	vu = 0;
	count = 0;
	i = N - 1;
	while (i >= 0)
	{
		if (tabl[i][col] > vu)
		{
			vu = tabl[i][col];
			count++;
		}
		i--;
	}
	if (count == restr)
		return (1);
	return (0);
}
