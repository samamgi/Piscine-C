/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdoe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 00:10:38 by chdoe             #+#    #+#             */
/*   Updated: 2024/07/07 21:57:50 by chdoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define N 4

int		sol(int tabl[N][N], int li, int col, int rules[N][N]);

int		sol_bis(int tabl[N][N], int liconu[3], int rules[N][N]);

void	init_tab(int tabl[N][N]);

void	funcmain1(int rules[4][4], int g_tab[16]);

void	affichage(int tabl[N][N]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	treat(char *str)
{
	int	i;
	int	rules[4][4];
	int	tabl[N][N];
	int	j;
	int	g_tab[16];

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			g_tab[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	funcmain1(rules, g_tab);
	init_tab(tabl);
	if (sol(tabl, 0, 0, rules))
		affichage(tabl);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		treat(argv[1]);
	else
		ft_putstr("Not enough/ Too much args !!\n");
	return (0);
}
