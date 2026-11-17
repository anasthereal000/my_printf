/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adrr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <anboujel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:09:51 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:09:32 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nbr)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_print_hex(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}

int	ft_print_addres(unsigned long addr)
{
	int	count;

	count = 0;
	if (addr == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_print_hex(addr);
	return (count);
}
