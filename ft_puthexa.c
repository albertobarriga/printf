/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:48:01 by abarriga          #+#    #+#             */
/*   Updated: 2022/10/07 17:15:04 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

unsigned int	ft_puthexa(const char *str, unsigned long long n)
{
	unsigned int	len;

	len = 0;
	if (n >= 16)
	{
		len = len + ft_puthexa(str, n / 16);
		len = len + ft_puthexa(str, n % 16);
	}
	else
	{
		ft_putchar(str[n]);
		len++;
	}
	return (len);
}
