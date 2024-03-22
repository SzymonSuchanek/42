/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:42:18 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/22 22:32:36 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *placeholders, ...)
{
	va_list			args;
	int				result;

	result = 0;
	va_start(args, placeholders);
	while (*placeholders != '\0')
	{
		if (*placeholders == '%')
		{
			placeholders++;
			if (*placeholders == 's')
				result += ft_putstr(va_arg(args, const char *));
			else if (*placeholders == 'c')
				result += ft_printchar(va_arg(args, int));
			else if (*placeholders == 'd' || *placeholders == 'i')
				result += ft_printitoa(va_arg(args, int));
			else if (*placeholders == 'p')
				result += ft_address(va_arg(args, unsigned long));
			else if (*placeholders == 'x' || *placeholders == 'X')
				result += ft_uplowhx(va_arg(args, unsigned int));
		}
		else
		{
			ft_putchar(*placeholders);
			result++;
		}
		placeholders++;
	}
	va_end(args);
	return (result);
}

int	main(void)
{
	char			a[55] = "Simon";
	char			b[55] = "done";
	unsigned int	og_function;
	unsigned int	my_function;

	og_function = printf("My name is %s, well %s ", a, b);
	printf("%d\n", og_function);
	my_function = ft_printf("My name is %s, well %s ", a, b);
	printf("%d\n", my_function);

	char			c = 'A';
	char			d = 'e';
	unsigned int	og_function3;
	unsigned int	my_function4;

	og_function3 = printf("My letter is %c, well don%c ", c, d);
	printf("%d\n", og_function3);
	my_function4 = ft_printf("My letter is %c, well don%c ", c, d);
	printf("%d\n", my_function4);

	int			e = 64523;
	int			f = -42613;
	unsigned int	og_function5;
	unsigned int	my_function6;

	og_function5 = printf("My digit is %d, and %i ", e, f);
	printf("%d\n", og_function5);
	my_function6 = ft_printf("My digit is %d, and %i ", e, f);
	printf("%d\n", my_function6);

	//int			g = 5;
	int			*address1 = NULL;
	int			h = 6;
	int			*address2 = &h;
	unsigned int	og_function7;
	unsigned int	my_function8;

	og_function7 = printf("My pointer address is %p, and %p ", address1, address2);
	printf("%d\n", og_function7);
	my_function8 = ft_printf("My pointer address is %p, and %p ", address1, address2);
	printf("%d\n", my_function8);

	return (0);
}

		// if (*(++placeholders) == 'u')
			
		// if (*(++placeholders) == '%')
			
