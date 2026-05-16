/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:52:33 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/13 00:52:03 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

char	num(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(char *str)
{
	long int	i;
	long int	result;
	long int	n;

	i = 0;
	result = 0;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if (!(n % 2 == 0))
		return (result *= -1);
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("     --+--+12344ab567"));
}*/
