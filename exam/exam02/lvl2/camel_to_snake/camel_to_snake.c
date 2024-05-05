/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/04/05 23:39:34 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/05 23:44:13 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	camel_to_snake(char *str)
{
	char *dest;
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count++;
		}
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + count + 1));
	if (!dest)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		dest[j++] = str[i++];
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			dest[j++] = '_';
			str[i] += 32;
		}
	}
	dest[j] = '\0';
	write(1, dest, j);
	free(dest);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else if (argv[1])
	{
		camel_to_snake(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}

// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// A snake_case string is a string where each word is in lower case,
//	separated by
// an underscore "_".

// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $