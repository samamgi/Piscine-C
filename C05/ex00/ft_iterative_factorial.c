/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:31:53 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 01:50:47 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	long	i;
	long	result;
	long	n;

	result = 1;
	i = 1;
	n = nb;
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1);
	}
	while (i <= n)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(15));
}*/
