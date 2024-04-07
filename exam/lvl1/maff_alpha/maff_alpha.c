/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:37:49 by ssuchane          #+#    #+#             */
/*   Updated: 2024/02/06 22:03:12 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(void)
{
	char	lowercase;
	char	uppercase;
	int		i;

	i = 0;
	lowercase = 'a';
	while (i < 26)
	{
		if (i % 2 == 0)
		{
			write(1, &lowercase, 1);
		}
		else
		{
			uppercase = lowercase - 32;
			write(1, &uppercase, 1);
		}
		i++;
		lowercase++;
	}

}

int	main(void)
{
	maff_alpha();
	return (0);
}
