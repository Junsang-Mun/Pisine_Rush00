/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:29:50 by jinam             #+#    #+#             */
/*   Updated: 2022/05/21 20:48:21 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
void	ft_putchar(char ch);
void	rush00(int col, int row, int index_row);

void	printout(char edge, char wall, int col, int index_col)
{
	if (index_col == 1 || index_col == col)
		ft_putchar(edge);
	else
		ft_putchar(wall);
}

void	rush00(int col, int row, int index_row)
{
	int	index_col;

	index_col = col;
	if (index_row == 1 || index_row == row)
	{
		while (index_col > 0)
		{
			printout('o', '-', col, index_col);
			index_col --;
		}
	}
	else
	{
		while (index_col > 0)
		{
			printout('|', ' ', col, index_col);
			index_col --;
		}
	}
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	int	index_row;

	index_row = row;
	while (index_row > 0)
	{
		rush00(col, row, index_row);
		index_row --;
	}
}
