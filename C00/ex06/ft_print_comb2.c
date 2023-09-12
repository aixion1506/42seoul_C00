/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:20:45 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/05 17:06:00 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b)
{
	char	a_tens;
	char	a_ones;
	char	b_tens;
	char	b_ones;

	a_tens = a / 10 + '0';
	a_ones = a % 10 + '0';
	b_tens = b / 10 + '0';
	b_ones = b % 10 + '0';
	write(1, &a_tens, 1);
	write(1, &a_ones, 1);
	write(1, " ", 1);
	write(1, &b_tens, 1);
	write(1, &b_ones, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b ++;
		}
		a ++;
	}
}
/*
int main()
{
    ft_print_comb2();
    return 0;
}
*/
