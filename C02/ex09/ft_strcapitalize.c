/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:54:27 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/09 20:11:17 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

int	minuscule(char c)
{
	return (c >= 97 && c <= 122);
}

int	majuscule(char c)
{
	return (c >= 65 && c <= 90);
}

int	alphanum(char c)
{
	return ((c >= 48 && c <= 57) || majuscule(c) || minuscule(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (minuscule(str[0]))
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (alphanum(str[i - 1]))
		{
			if (majuscule(str[i]))
				str[i] += 32;
		}
		else
		{
			if (minuscule(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	int	i;

	i = 1;

	while (i >= 1 && i + 1 <= argc)
	{
	ft_strcapitalize(&argv[i][0]);
	ftputchar('\n');
	i++;
	}
		return  (0);
}*/
