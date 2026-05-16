/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:39:41 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/16 02:09:40 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc)
	{
		while (argv[0][j])
		{
			ftputchar(argv[0][j]);
			j++;
		}
		ftputchar('\n');
	}
	return (0);
}
