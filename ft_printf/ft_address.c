/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:09:41 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/22 21:18:33 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexa(unsigned long ptr)
{
	int	len;

	len = 0;
	if (ptr > 16)
	{
		ft_hexa(ptr / 16);
		ft_hexa(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

int	ft_address(unsigned long ptr)
{
	int	count;

	count = 2;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count += ft_hexa(ptr);
	return (count);
}

// int	main(void)
// {
// 	unsigned long int	h = 10;
// 	unsigned long int	*address2 = &h;

// 	ft_address(*address2);
// 	return (0);
// }
