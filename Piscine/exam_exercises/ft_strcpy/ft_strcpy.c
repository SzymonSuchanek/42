/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:12:37 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/07 00:21:20 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char	s1[] = "";
	char	s2[] = "T";
	char	*s5 = ft_strcpy(s1, s2);
	//char	s3[] = "";
	//char	s4[] = "T";	
	//char	*s6 = strcpy(s3, s4);


	printf("%s\n", s5);
	//printf("%s\n", s6);
	return (0);
}

	/* Assignment name  : ft_strcpy
	Expected files   : ft_strcpy.c
	Allowed functions:
	--------------------------------------------------------------------------------

	Reproduce the behavior of the function strcpy (man strcpy).

	Your function must be declared as follows:

	char    *ft_strcpy(char *s1, char *s2); */