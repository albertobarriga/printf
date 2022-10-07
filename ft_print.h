/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:31:04 by abarriga          #+#    #+#             */
/*   Updated: 2022/10/07 18:44:08 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>

unsigned int	ft_putchar(const unsigned char c);
size_t			ft_strlen(cons char *s);
unsigned int	ft_putstr(char *s);
unsigned int	ft_putnbr_uns(unsigned long n);
unsigned int	ft_putnbr(int n);
unsigned int	ft_puthexa(const char *str, unsigned long long n);
int				ft_printf(char const *str, ...);
#endif



