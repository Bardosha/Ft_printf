/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:00:22 by asaunina          #+#    #+#             */
/*   Updated: 2026/06/18 15:34:31 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
		len += ft_putnbr(n);
	}
	else if (n >= 10)
	{
		len += ft_putnbr(n / 10);
		len += ft_putchar((n % 10) + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_putuns(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putuns(n / 10);
		len += ft_putchar((n % 10) + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_puthex(unsigned long n, int up)
{
	char	*base;
	int		len;

	len = 0;
	if (up)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_puthex(n / 16, up);
		len += ft_putchar((base[n % 16]));
	}
	else
		len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_puthex((unsigned long)ptr, 0);
	return (len);
}
