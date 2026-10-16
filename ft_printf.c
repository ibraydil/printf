/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:17:37 by dibrayev          #+#    #+#             */
/*   Updated: 2026/10/16 22:55:01 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_type(va_list *arg, const char *input, size_t *counter)
{
	if (*input == '%')
		ft_putchar('%', counter);
	if (*input == 'c')
		ft_putchar(va_arg(*arg, int), counter);
	if (*input == 's')
		ft_putstr(va_arg(*arg, char *), counter);
	if (*input == 'p')
		ft_putpntr(va_arg(*arg, void *), counter);
	if (*input == 'i' || *input == 'd')
		ft_putnbr(va_arg(*arg, int), counter);
	if (*input == 'u')
		ft_putnbr(va_arg(*arg, unsigned int), counter);
	if (*input == 'x')
		ft_puthex(va_arg(*arg, unsigned int), counter, 'a');
	if (*input == 'X')
		ft_puthex(va_arg(*arg, unsigned int), counter, 'A');
}

int	ft_printf(const char *input, ...)
{
	va_list arg;
	size_t counter;

	counter = 0;
	va_start(arg, input);
	while (*input)
	{
		if (*input != '%')
			ft_putchar(*input, &counter);
		else
		{
			input++;
			ft_type(&arg, input, &counter);
		}
		input++;
	}
	va_end(arg);
	return (counter);
}
