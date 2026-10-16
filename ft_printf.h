/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:22:48 by dibrayev          #+#    #+#             */
/*   Updated: 2026/10/16 22:56:21 by dibrayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

void	ft_putchar(char c, size_t *counter);
void	ft_putstr(char *c, size_t *counter);
void	ft_putnbr(long n, size_t *counter);
void	ft_putpntr(void *input, size_t *counter);
int		ft_printf(const char *, ...);
void	ft_puthex(unsigned long n, size_t *counter, char start);


#endif

/*
(*counter)++;   // increases the VALUE the pointer points to - ok here
counter++;      // moves the POINTER itself to the next address - wrong here*/
