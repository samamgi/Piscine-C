/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:22:05 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/02 22:57:47 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	c1;
	int	swap;
	int	count;

	count = 0;
	c = 0;
	c1 = 1;
	while (count <= size - 1)
	{
		while (c1 <= size - 1)
		{
			if (tab[c1] <= tab[c])
			{
				swap = tab[c];
				tab[c] = tab[c1];
				tab[c1] = swap;
			}
			c++;
			c1++;
		}
		c = 0;
		c1 = 1;
		count++;
	}
}
