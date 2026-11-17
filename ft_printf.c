/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboujel <anboujel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:32:20 by anboujel          #+#    #+#             */
/*   Updated: 2026/11/12 22:02:53 by anboujel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier(char find, va_list arg_ptr)
{
	int	count;

	count = 0;
	if (find == 'd' || find == 'i')
		count += ft_putnbr(va_arg(arg_ptr, int));
	else if (find == 'c')
		count += ft_putchar(va_arg(arg_ptr, int));
	else if (find == 's')
		count += ft_putstr(va_arg(arg_ptr, char *));
	else if (find == 'p')
		count += ft_print_addres(va_arg(arg_ptr, unsigned long));
	else if (find == 'u')
		count += ft_put_unsigned(va_arg(arg_ptr, unsigned int));
	else if (find == 'x')
		count += ft_print_hex_lower(va_arg(arg_ptr, unsigned int));
	else if (find == 'X')
		count += ft_print_hex_upper(va_arg(arg_ptr, unsigned int));
	else if (find == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	arg_ptr;

	count = 0;
	if (!format || write(1, 0, 0) == -1)
		return (-1);
	va_start(arg_ptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += specifier(*(++format), arg_ptr);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(arg_ptr);
	return (count);
}
