/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:29:08 by jinam             #+#    #+#             */
/*   Updated: 2022/05/22 14:42:11 by minseuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	strtoint(char *str)
{
	int	out;
	int	index;
	int	outbefore;

	index = 0;
	outbefore = 0;
	out = 0;
	while (47 < str[index] && str[index] < 58)
	{
		out = outbefore * 10 + (str[index] - 48);
		outbefore = out;
		index ++;
	}
	return (out);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	rush(strtoint(argv[1]), strtoint(argv[2]));
	return (0);
}
