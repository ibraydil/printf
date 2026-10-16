/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:14:02 by dibrayev          #+#    #+#             */
/*   Updated: 2026/10/16 22:57:13 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, size_t *counter)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', counter);
		nb = nb * -1;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0', counter);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, counter);
		ft_putnbr(nb % 10, counter);
	}
}

void	ft_puthex(unsigned long n, size_t *counter, char start)
{
	int i;

	if (n < 16)
	{
		if (n <= 9)
			ft_putnbr(n, counter);
		else
		{
			i = start + (n % 10);
			ft_putchar (i, counter);
		}
	}
	else
	{
		ft_puthex(n / 16, counter, start);
		ft_puthex(n % 16, counter, start);
	}
}

void	ft_putpntr(void *input, size_t *counter)
{
	if (input == NULL)
	{
		write (1, "(nil)", 5);
		*counter += 5;
		return ;
	}
	else
	{
		write (1, "0x", 2);
		*counter += 2;
		ft_puthex((unsigned long)input, counter, 'a');
	}
}
