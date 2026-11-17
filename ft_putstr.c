/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <anboujel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:10:22 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/10 00:46:54 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s != '\0')
	{
		count += ft_putchar((int)*s);
		s++;
	}
	return (count);
}
