/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:23:43 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 19:29:12 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	n;

	n = nb;
	i = 2;
	if (n <= 1)
	{
		return (0);
	}
	while (i <= (n / i))
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	n;

	n = nb;
	if (nb < 2)
	{
		return (2);
	}
	while (ft_is_prime(n) == 0)
	{
		n++;
	}
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(2147483645));
}*/
