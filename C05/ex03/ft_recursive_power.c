/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:53:53 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 19:40:23 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = power;
	if (i > 1)
	{
		return (n * ft_recursive_power(n, i - 1));
	}
	return (n);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(5, 12));
}*/
