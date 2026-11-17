/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <anboujel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:10:15 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:46:06 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;
	char	c;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
