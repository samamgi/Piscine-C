/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:03:51 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/15 17:57:04 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/*void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ftputnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ftputchar('-');
	}
	if (n > 9)
	{
		ftputnbr(n / 10);
		ftputnbr(n % 10);
	}
	else
	{
		ftputchar(n + 48);
	}
}

int	ftatoi(char *str)
{
	long	i;
	long	n;
	long	result;

	i = 0;
	n = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * n);
}*/

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_range(atoi(av[1]), atoi(av[2]));
	}
	return (0);
}*/
