/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:33:59 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/06 15:54:44 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	do_op(char *a, char sign, char *b)
{
	int	result;

	result = 0;
	if (sign == '+')
	{
		result = atoi(a) + atoi(b);
		return (result);
	}
	else if (sign == '-')
	{
		result = atoi(a) - atoi(b);
		return (result);
	}
	else if (sign == '*')
	{
		result = atoi(a) * atoi(b);
		return (result);
	}
	else if (sign == '/')
	{
		result = atoi(a) / atoi(b);
		return (result);
	}
	else if (sign == '%')
	{
		result = atoi(a) % atoi(b);
		return (result);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 415)
		printf("\n");
	else if (argv[1] && argv[2][0] && !argv[2][1] && argv[3])
		printf("%d\n", do_op(argv[1], argv[2][0], argv[3]));
	else
		printf("\n");
	return (0);
}

