/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadi-ou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:31:20 by ssadi-ou          #+#    #+#             */
/*   Updated: 2024/07/02 21:21:06 by ssadi-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	swap;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		swap = tab[left];
		tab[left] = tab[right];
		tab [right] = swap;
		left++;
		right--;
	}
}
