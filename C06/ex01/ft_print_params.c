/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:12:30 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 17:25:49 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ftputstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ftputchar(str[i]);
		i++;
	}
	str[i] = '\0';
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (ac > i)
		{
			ftputstr(av[i]);
			ftputchar('\n');
			i++;
		}
	}
	return (0);
}
