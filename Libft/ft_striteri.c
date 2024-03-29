/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:30:28 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void printIndexChar(unsigned int index, char *c) {
//     (void)index; // Suppress unused parameter warning
//     printf("Index %u: %c\n", index, *c);
// }

// void toUpper(unsigned int index, char *c) {
//     (void)index; // Suppress unused parameter warning
//     if (*c >= 'a' && *c <= 'z') {
//         *c = *c - 32;
//     }
// }

// void multiplyByTwo(unsigned int index, char *c) {
//     (void)index; // Suppress unused parameter warning
//     if (*c >= '0' && *c <= '9') {
//         *c = ((*c - '0') * 2) + '0'; // Corrected multiplication
//     }
// }

// void printCharAscii(unsigned int index, char *c) {
//     (void)index; // Suppress unused parameter warning
//     printf("Char %c: %d\n", *c, *c);
// }

// int main() {
//     char str1[] = "hello";
//     printf("Test Case 1:\nExpected Output:\nIndex 0: h\nIndex 1: e\nIndex 
//		2: l\nIndex 3: l\nIndex 4: o\nActual Output:\n");
//     ft_striteri(str1, &printIndexChar);

//     char str2[] = "";
//     printf("\nTest Case 2:\nExpected Output:\nActual Output:\n");
//     ft_striteri(str2, &printIndexChar);

//     char str3[] = "world";
//     printf("\nTest Case 3:\nExpected Output: WORLD\nActual Output: ");
//     ft_striteri(str3, &toUpper);
//     printf("%s\n", str3);

//     char str4[] = "1234321";
//     printf("\nTest Case 4:\nExpected Output: 2468642\nActual Output:\n");
//     ft_striteri(str4, &multiplyByTwo);
//     printf("%s\n", str4);

//     char str5[] = "hello, world!";
//     printf("\nTest Case 5:\nExpected Output:\nChar h: 104\nChar e: 
//		101\nChar l: 108\nChar l: 108\nChar o: 111\nChar ,: 
//		44\nChar  : 32\nChar w: 119\nChar o: 111\nChar r: 
//		114\nChar l: 108\nChar d: 100\nChar !: 33\nActual Output:\n");
//     ft_striteri(str5, &printCharAscii);

//     char str6[] = "a";
//     printf("\nTest Case 6:\nExpected Output:\nIndex 0: a\nActual Output:\n");
//     ft_striteri(str6, &printIndexChar);
//     return 0;
// }
