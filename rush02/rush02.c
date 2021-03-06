/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:44:21 by ntoshihi          #+#    #+#             */
/*   Updated: 2021/03/18 22:44:26 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	set(int n, char c1, char c2)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0 || i == n - 1)
			ft_putchar(c1);
		else
			ft_putchar(c2);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x < 0 || y < 0)
		return ;
	while (i < x)
	{
		if (i == 0)
			set(y, 'A', 'B');
		else if (i == (x - 1))
			set(y, 'C', 'B');
		else
			set(y, 'B', ' ');
		i++;
	}
}
