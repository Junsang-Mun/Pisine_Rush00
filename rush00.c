/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:29:50 by jinam             #+#    #+#             */
/*   Updated: 2022/05/21 15:17:03 by jumun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void rush(int a, int b);
void ft_putchar(char ch);
void rush00(int first,int second, int third);

void hamsoo(char a, char b, int first, int count)
{
			if (count==1 || count == first)
				ft_putchar(a);
			else
				ft_putchar(b);
}

void rush00(int first, int second, int third)
{
	int	count;

	count = first;

	if (third == 1 || third == second)
	{
		while (count > 0)	
		{
			hamsoo('o', '-', first, count);
			count --;
		}
	}
	else
	{
		while (count > 0)
		{
			hamsoo('|', ' ', first, count);
			count --;
		}
	}
	ft_putchar('\n');
}

void rush(int a, int b)
{
	int	first_cycle;

	first_cycle = b;

	while (first_cycle > 0)
	{
		//printf("%d %d %d\n",a,b,first_cycle);
		//ft_putchar(a, b, first_cycle);
		rush00(a,b,first_cycle);
		first_cycle --;
	}
}
