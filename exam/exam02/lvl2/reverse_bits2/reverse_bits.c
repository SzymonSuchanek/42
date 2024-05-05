/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:41:58 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/24 11:30:26 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int	result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (result);
}

int	main(void)
{
	int i;
	unsigned char	a;
	unsigned char	b;

	i = 8;
	a = 'a';
	while (i > 0)
	{
		if (a >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
	printf("\n");
	i = 8;
	b = reverse_bits(a);
	while (i > 0)
	{
		if (b >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
	return (0);
}
