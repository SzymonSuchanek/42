/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:42:18 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/21 16:32:04 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *placeholders, ...)
{
	va_list		args;
	int			result;
	const char	*str;
	char		c;
	int			n;

	result = 0;
	va_start(args, placeholders);
	while (*placeholders != '\0')
	{
		if (*placeholders == '%')
		{
			placeholders++;
			if (*placeholders == 's')
			{
				str = va_arg(args, const char *);
				result += ft_putstr(str);
			}
			else if (*placeholders == 'c')
			{
				c = va_arg(args, int);
				ft_putchar(c);
				result++;
			}
			else if (*placeholders == 'd' || *placeholders == 'i')
			{
				n = va_arg(args, int);
				write(1, ft_itoa(n), ft_count(n));
				result += ft_count(n);
			}
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

	og_function5 = printf("MY digit is %d, and %i ", e, f);
	printf("%d\n", og_function5);
	my_function6 = ft_printf("MY digit is %d, and %i ", e, f);
	printf("%d\n", my_function6);
	
	return (0);
}


		// if (*(++placeholders) == 'p')
			
		// if (*(++placeholders) == 'u')
			
		// if (*(++placeholders) == 'x' && *(placeholders) == 'X')
			
		// if (*(++placeholders) == '%')
			