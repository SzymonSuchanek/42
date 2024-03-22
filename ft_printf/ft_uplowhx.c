/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uplowhx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:51:44 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/22 22:39:11 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_uplowhx(unsigned int ptr)
{
	int	len;

	len = 0;
	if (ptr > 16)
	{
		ft_uplowhx(ptr / 16);
		ft_uplowhx(ptr % 16);
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
