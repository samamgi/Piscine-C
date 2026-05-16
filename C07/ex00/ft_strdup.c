/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:31:47 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/15 17:02:11 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int	ftstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ftstrlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ftputstr(ft_strdup(av[1]));
	}
	return (0);
}*/
