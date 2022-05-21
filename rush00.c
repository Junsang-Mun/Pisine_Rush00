/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:29:50 by jinam             #+#    #+#             */
/*   Updated: 2022/05/21 15:33:36 by jumun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	rush(int a, int b);
void	ft_putchar(char ch);
void	rush00(int first, int second, int third);

void	printout(char a, char b, int first, int count)
{
	if (count == 1 || count == first)
		ft_putchar(a);
	else
		ft_putchar(b);
}

void	rush00(int first, int second, int third)
{
	int	count;

	count = first;
	if (third == 1 || third == second)
	{
		while (count > 0)
		{
			printout('o', '-', first, count);
			count --;
		}
	}
	else
	{
		while (count > 0)
		{
			printout('|', ' ', first, count);
			count --;
		}
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	first_cycle;

	first_cycle = b;
	while (first_cycle > 0)
	{
		rush00(a, b, first_cycle);
		first_cycle --;
	}
}
