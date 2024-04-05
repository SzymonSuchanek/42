/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 23:39:34 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/05 23:44:13 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	camel_to_snake(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] => )
}


// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $