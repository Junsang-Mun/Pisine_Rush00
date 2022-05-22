/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:29:50 by jinam             #+#    #+#             */
/*   Updated: 2022/05/22 16:53:12 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
void	ft_putchar(char ch);
void	rush03(int col, int row, int index_row);

void	printout(char edge, char wall, int col, int index_col)
{
	if (index_col == 1 || index_col == col)
		ft_putchar(edge);
	else
		ft_putchar(wall);
}

void	end_print(int col)
{
	if (col == 1)
		ft_putchar('A');
	else
		ft_putchar('C');
}

void	rush03(int col, int row, int index_row)
{
	int	index_col;

	index_col = col;
	if (index_row == 1 || index_row == row)
	{
		while (index_col > 1)
		{
			printout('A', 'B', col, index_col);
			index_col --;
		}
		end_print(col);
	}
	else
	{
		while (index_col > 0)
		{
			printout('B', ' ', col, index_col);
			index_col --;
		}
	}
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	int	index_row;

	if (col <= 0)
		row = 0;
	index_row = row;
	while (index_row > 0)
	{
		rush03(col, row, index_row);
		index_row --;
	}
}
