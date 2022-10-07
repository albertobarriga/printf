/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriga <abarriga@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:01:15 by abarriga          #+#    #+#             */
/*   Updated: 2022/10/07 09:46:18 by abarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"ft_printf.h"

unsigned int	ft_putchar(const unsigned char c)
{
	write(1, &c, 1);
	return (1);
}
