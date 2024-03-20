/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:42:18 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/20 23:13:21 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putstr(const char *s)
{
	size_t	length;

	length = 0;
	if (!s)
		return (0);
	while (s[length] != '\0')
	{
		write(1, &s[length], 1);
		length++;
	}
	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

int	ft_printf(const char *placeholders, ...)
{
	va_list		args;
	int			result;
	const char	*str;

	result = 0;
	va_start(args, placeholders);
	while (*placeholders != '\0')
	{
		while (*placeholders == '%')
		{
			if (*(++placeholders) == 's')
			{
				str = va_arg(args, const char *);
				result += ft_putstr(str);
				placeholders++;
			}
		}
		write(1, placeholders, 1);
		result++;
		placeholders++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	char	c[55] = "Simon";
	char	d[55] = "done";

	printf("My name is %s, well %s\n", c, d);
	ft_printf("My name is %s, well %s", c, d);
	return (0);
}


		// if (*(++placeholders) == 'p')
			
		// if (*(++placeholders) == 'd')
			
		// if (*(++placeholders) == 'i')
			
		// if (*(++placeholders) == 'u')
			
		// if (*(++placeholders) == 'x' && *(placeholders) == 'X')
			
		// if (*(++placeholders) == '%')
			