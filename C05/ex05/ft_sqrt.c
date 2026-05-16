/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 01:46:28 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 20:19:29 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long int	n;
	long int	i;

	i = 0;
	n = nb;
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	while (i <= n / 2 && i <= 46341)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
}*/
