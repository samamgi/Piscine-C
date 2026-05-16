/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:45:20 by ahamad            #+#    #+#             */
/*   Updated: 2024/06/30 14:04:07 by kwinfiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ftline(int x, char i, char j, char k)
{
	int	cline;

	cline = 1;
	while (cline <= x)
	{
		if (cline == 1)
		{
			ft_putchar(i);
		}
		else if (cline == x)
		{
			ft_putchar(k);
		}
		else
		{
			ft_putchar(j);
		}
		cline++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	ccolon;

	ccolon = 1;
	while (ccolon <= y)
	{
		if (ccolon == 1)
		{
			ftline(x, '/', '*', '\\');
		}
		else if (ccolon == y)
		{
			ftline(x, '\\', '*', '/');
		}
		else
		{
			ftline(x, '*', ' ', '*');
		}
	ccolon++;
	}
}	
