/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:14:57 by dibrayev          #+#    #+#             */
/*   Updated: 2026/10/16 19:56:25 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, size_t *counter)
{
	write (1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char *c, size_t *counter)
{
	int	i;
	i = 0;

	if (c == NULL)
	{
		write (1, "(null)", 6);
		*counter += 6;
		return ;
	}
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
		(*counter)++;
	}
}
