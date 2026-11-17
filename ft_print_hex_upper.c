/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 00:41:57 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:43:03 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_print_hex_upper(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}
