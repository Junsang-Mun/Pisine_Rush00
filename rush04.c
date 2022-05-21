/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumun <jumun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:25:10 by jumun             #+#    #+#             */
/*   Updated: 2022/05/21 20:43:05 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
void	ft_putchar(char ch);
void	rush02(int col, int row, int index_row);

void	printout(char f_edge, char b_edge, int col, int index_col)
{
	if (f_edge == 'B')
	{
		if (index_col == 1 || index_col == col)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	else if (index_col == col)
		ft_putchar(b_edge);
	else if (index_col == 1)
		ft_putchar(f_edge);
	else
		ft_putchar('B');
}

void	head_line(int col, int flag)
{
	int	index_col;

	index_col = col;
	if (flag == 2)
	{
		while (index_col > 0)
		{
			printout('A', 'C', col, index_col);
			index_col --;
		}
	}
	else if (flag == 1)
	{
		while (index_col > 0)
		{
			printout('C', 'A', col, index_col);
			index_col --;
		}
	}
}

void	middle_line(int col)
{
	int	index_col;

	index_col = col;
	while (index_col > 0)
	{
		printout('B', ' ', col, index_col);
		index_col --;
	}
}

void	rush04(int col, int row, int index_row)
{
	if (index_row == row)
		head_line(col, 1);
	else if (index_row == 1)
		head_line(col, 2);
	else if (index_row != 1 || index_row != row)
		middle_line(col);
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	int	index_row;

	index_row = row;
	while (index_row > 0)
	{
		rush04(col, row, index_row);
		index_row --;
	}
}
