/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/07/12 23:13:01 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/12 23:19:01 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lensrc;
	unsigned int	lendest;

	lensrc = 0;
	lendest = 0;
	i = 0;
	while (src[lensrc])
		lensrc++;
	while (dest[lendest])
		lendest++;
	j = lendest;
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (i < size - lendest - 1 && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lendest + lensrc);
}

/*#include <stdio.h>


int	main(void)
{
	int t;
	int l = 100;
	char b[20] = " Saint Tropez!";
	char a[20] = "Welcome To";
	t = ft_strlcat(a, b, l);
	printf("%d\n", t);
	return (0);
}*/
