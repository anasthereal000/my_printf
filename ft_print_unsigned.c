/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 00:43:38 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:44:34 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int nbr)
{
	int				count;
	unsigned char	c;

	count = 0;
	if (nbr > 9)
		count += ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
