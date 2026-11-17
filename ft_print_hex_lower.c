/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <anboujel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:10:00 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:41:06 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(unsigned int nbr)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_print_hex_lower(nbr / 16);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}
