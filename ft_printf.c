/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:17:37 by dibrayev          #+#    #+#             */
/*   Updated: 2026/10/09 16:46:26 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_type(arg, size_t *counter)
{
	if (*input == '%')
		ft_putchar('%', counter);
	if (*input == 'c')
		ft_putchar(arg, counter);
	if (*input == 's')
		ft_putstr(arg, counter);
	if (*input == 'p')
		ft_putpntr(arg, counter);
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
			ft_type(arg, (char *)input, &counter);
		}
		input++;
	}
	va_end(arg);
	return (counter);
	
}