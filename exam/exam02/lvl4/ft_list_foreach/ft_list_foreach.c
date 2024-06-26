/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:47:09 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/05 17:00:51 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_list.h>

void	ft_list_foreach(t_list *being_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = being_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

// Assignment name  : ft_list_foreach
// Expected files   : ft_list_foreach.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a list and a function pointer, and applies this
// function to each element of the list.

// It must be declared as follows:

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

// The function pointed to by f will be used as follows:

// (*f)(list_ptr->data);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;