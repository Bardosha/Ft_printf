// header

#include "ft_printf.h"

int	format(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(*args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(*args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), 1));
	else if (c == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len += format(str[++i], &args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/*
#include "ft_printf.h"

int	format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len += format(str[++i], args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
*/