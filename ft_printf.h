/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loena <loena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:12:09 by loena             #+#    #+#             */
/*   Updated: 2025/08/30 16:32:39 by loena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);
int ft_puthexa(unsigned long int n, const char *base);

#endif
