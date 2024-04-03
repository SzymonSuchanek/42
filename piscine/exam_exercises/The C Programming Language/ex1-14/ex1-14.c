/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1-14.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:31:38 by ssuchane          #+#    #+#             */
/*   Updated: 2024/04/03 22:15:53 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	histogram(char *str)
{
	int	j;
	int l;
	int	wordlen;
	int	len[13] = {0};
	int	longestword;

	i = 0;
	j = 0;
	l = 0;
	longestword = 0;
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
	// while (l <= longestword)
	// {
	// 	printf("%d ", len[l]);
	// 	l++;
	// }
	// l = 0;
	// printf("\n");
	int	most_words = 0;
	int len_size = sizeof(len) / sizeof(len[0]);
	while (l < len_size )
	{
		if (len[l] > most_words)
			most_words = len[l];
		l++;
	}
	l = 0;
	int temp;
	temp = longestword;
	while (most_words > 0)
	{
		l = 0;
		while (temp)
		{
			if (len[l + 1] == most_words)
			{
				printf("  ♦  ");
				len[l + 1]--;
			}
			else if (len[l + 1] != most_words)
				printf("     ");
			l++;
			temp--;
		}
		if (most_words % 5 == 0)
			printf(" %d", most_words);
		printf("\n");
		most_words--;
		temp = longestword;
	}
	l = 1;
	while (l <= longestword)
	{
		printf(" %03d ", l);
		l++;
	}
}

int	main(void)
{
	char *str;

	str = "What is Lorem Ipsum?"
	"Lorem Ipsum is simply dummy text of the printing and typesetting industry. "
	"Lorem Ipsum has been the industrys standard dummy text ever since the "
	", when an unknown printer took a galley of type and scrambled it to "
	"make a type specimen book. It has survived not only five centuries, but "
	"also the leap into electronic typesetting, remaining essentially unchanged. "
	"It was popularised in the  with the release of Letraset sheets containing "
	"Lorem Ipsum passages, and more recently with desktop publishing software "
	"like Aldus PageMaker including versions of Lorem Ipsum."

	"Why do we use it?"
	"It is a long established fact that a reader will be distracted by the "
	"readable content of a page when looking at its layout. The point of using "
	"Lorem Ipsum is that it has a more-or-less normal distribution of letters, "
	"as opposed to using Content here, content here, making it look like readable "
	"English. Many desktop publishing packages and web page editors now use Lorem "
	"Ipsum as their default model text, and a search for lorem ipsum will uncover "
	"many web sites still in their infancy. Various versions have evolved over the "
	"years, sometimes by accident, sometimes on purpose (injected humour and the "
	"like).";
	histogram(str);
	return (0);
}
