/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:42:25 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/23 15:39:39 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *placeholders, ...);
int		ft_count(int n);
char	*ft_strdup(const char *s);
size_t	ft_putstr(const char *s);
size_t	ft_strlen(const char *s);
void	ft_putchar(int c);
int		ft_address(unsigned long nbr);
int		ft_printitoa(int n);
int		ft_print_char(char c);
int		ft_printhex(unsigned int nbr, const char placeholders);
int		ft_print_uint(unsigned int nbr);

#endif