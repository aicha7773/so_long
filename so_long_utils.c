/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:45:47 by aatki             #+#    #+#             */
/*   Updated: 2022/12/27 18:16:24 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit(t_long *l)
{
	free(l->p.s);
	exit(0);
}

void	putstr_error(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(2, &s[i], 1);
}

void	ft_error(char *s, int e)
{
	putstr_error("Error\n");
	putstr_error(s);
	exit(e);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_nbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n > 9)
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
