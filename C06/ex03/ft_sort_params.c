/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:48:12 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 21:31:50 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ftstrcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ftputstr(int ac, char **av)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (ac > i)
	{
		while (av[i][k])
		{
			ftputchar(av[i][k]);
			k++;
		}
		ftputchar('\n');
		k = 0;
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (ac > i)
	{
		j = i + 1;
		while (ac > j)
		{
			if (ftstrcmp(&av[i][0], &av[j][0]) > 0)
			{
				swap = av[i];
			av[i] = av[j];
			av[j] = swap;
			}
			j++;
		}
		i++;
	}
	ftputstr(ac, av);
	return (0);
}
