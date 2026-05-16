/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:00:01 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/14 01:45:13 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	fibonaccirecu(int index, int n1, int n2)
{
	if (index == 1)
	{
		return (n2);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index > 1)
	{
		return (fibonaccirecu(index - 1, n2, n2 + n1));
	}
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (fibonaccirecu(index, 0, 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(10));
}*/
