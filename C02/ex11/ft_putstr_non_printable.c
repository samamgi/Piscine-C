/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:18:47 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/18 14:34:35 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXBASE "0123456789abcdef"

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ftputchar(str[i]);
			i++;
		}
		else
		{
			ftputchar('\\');
			ftputchar(HEXBASE[str[i] / 16]);
			ftputchar(HEXBASE[str[i] % 16]);
			i++;
		}
	}
}

/*int	main(void)
{
	char c[] = "Coucou\ntu vas bien ?";

		ft_putstr_non_printable(c);
}*/
