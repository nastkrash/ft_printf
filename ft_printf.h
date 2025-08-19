/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:53:17 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/20 17:31:09 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_puthex(unsigned long nbr, bool is_upper);
int	ft_putnbr(int n);
int	ft_putpoint(void *address);
int	ft_putstr(char *str);
int	ft_putunnbr(unsigned int n);
int	ft_strlen(char *str);
int	ft_printf(const char *format, ...);

#endif