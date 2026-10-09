/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:22:48 by dibrayev          #+#    #+#             */
/*   Updated: 2026/09/16 21:14:31 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:02:09 by dibrayev          #+#    #+#             */
/*   Updated: 2026/09/14 14:49:44 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

void	ft_putchar(char c, size_t *counter)
{
	write (1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char *a)
{
	size_t i;

    i = 0;
    while (a[i])
	{
		ft_putchar(a[i], counter);
		i++;
	}
}

void	ft_putpntr(void *input, size_t *counter)
{
	
}

int	ft_printf(const char *, ...);

#endif

/*
(*counter)++;   // increases the VALUE the pointer points to - ok here
counter++;      // moves the POINTER itself to the next address - wrong here*/