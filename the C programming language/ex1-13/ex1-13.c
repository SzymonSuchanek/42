/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1-13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:31:38 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/03 20:59:32 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	histogram(char *str)
{
	int	i;
	int	j;
	int l;
	int	wordlen;
	int	len[25] = {0};
	int	longestword;
	int	k;

	i = 0;
	j = 0;
	l = 0;
	k = 1;
	longestword = 0;
	// while (str[i] != '\0')
	// 	i++;
	while (str[j])
	{
		wordlen = 0;
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ' && str[j] != '\0')
		{
			wordlen++;
			j++;
		}
		if (wordlen > 0)
		{
			len[wordlen]++;
			if (longestword < wordlen)
				longestword = wordlen;
		}
	}
	while (k <= longestword)
	{
		// while (len[k] == 0)
		// {
		// 	k++;
		// }
		printf("#%2d ", k);
		while (l < len[k])
		{
			printf("⊡ ");
			l++;
		}
		l = 0;
		printf("\n");
		k++;
	}
}

int	main(void)
{
	char *str;

	str = "Send unlimited texts, photos, videos, "
		"documents, and more to any ios, ipados, macos, "
		"or watchOS device with iMessage, or use it to "
		"send SMS and MMS messages.";
	histogram(str);
	return (0);
}




