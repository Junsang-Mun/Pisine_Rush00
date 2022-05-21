/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:29:50 by jinam             #+#    #+#             */
/*   Updated: 2022/05/21 14:37:06 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int a, int b);
void ft_putchar(char ch);

void rush(int a, int b)
{
	int	first_cycle;

	first_cycle = b;

	while (first_cycle > 0)
	{
		//ft_putchar(a, b, first_cycle);
		ft_putchar('a');
		first_cycle --;
	}
}
