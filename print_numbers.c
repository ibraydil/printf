/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:14:02 by dibrayev          #+#    #+#             */
/*   Updated: 2026/10/16 19:56:43 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, size_t *counter)
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
