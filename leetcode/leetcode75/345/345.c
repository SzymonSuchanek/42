/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   345.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:40:38 by ssuchane          #+#    #+#             */
/*   Updated: 2024/05/07 19:09:05 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int is_vowel(char c)
{
    if (c == 'a' || c == 'A'
        || c == 'e' || c == 'E' 
        || c == 'i'  || c == 'I'
        || c == 'o'  || c == 'O'
        || c == 'u'  || c == 'U')
	{
        return (1);
	}
    return (0);
}

char *reverseVowels(char *s)
{
    int i;
    int j;
    int temp;

    j = strlen(s) - 1;
    i = 0;
    temp = 0;
    while (i < j)
    {
        while (i < j && is_vowel(s[i]) == 0)
            i++;
        while (i < j && is_vowel(s[j]) == 0)
            j--;
        if (i < j && is_vowel(s[i]) == 1 && is_vowel(s[j]) == 1)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    return (s);
}

int main(void)
{
	char str[] = "ae";
	
	printf("%s", reverseVowels(str));
	return (0);
}
