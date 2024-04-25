/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:19:49 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/24 18:17:41 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	get_digit(char c, int digits)
{
	int	max_digit;

	if (digits <= 10)
		max_digit = digits + '0';
	else
		max_digit = digits - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		is_neg;
	int		result;
	int		digit;

	i = 0;
	is_neg = 1;
	if (str[0] == '-')
	{
		is_neg = -1;
		i = 1;
	}
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * is_neg);
		i++;
	}
	return (result);
}

int	main(void)
{
	ft_atoi_base("545", 5);
	return (0);
}


// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// -------------------------------------------------

// Write a function that converts the string argument
// str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according
// to the requested base. For
// example, base 4 recognizes "0123" and base 16
// recognizes "0123456789abcdef".

// Uppercase letters must also be recognized:
// "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are
// the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);