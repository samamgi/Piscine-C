/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdoe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:08:48 by chdoe             #+#    #+#             */
/*   Updated: 2024/07/07 21:17:34 by chdoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 4

void	funcmain1(int rules[4][4], int g_tab[16])
{
	int	w;
	int	z;
	int	zebi;

	w = 0;
	z = 0;
	zebi = 0;
	while (w < 4)
	{
		while (z < 4)
		{
			rules[w][z] = g_tab[zebi];
			z++;
			zebi++;
		}
		z = 0;
		w++;
	}
}

void	funcmain2(char argv[1][0], int g_tab[16])
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			g_tab[j] = argv[1][i] - '0';
			j++;
		}
		i++;
	}
}
