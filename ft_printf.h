/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <anboujel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:32:32 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:39:56 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_put_unsigned(unsigned int nbr);
int	ft_print_hex_lower(unsigned int nbr);
int	ft_print_hex_upper(unsigned int nbr);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_print_addres(unsigned long nbr);
int	ft_printf(const char *format, ...);

#endif