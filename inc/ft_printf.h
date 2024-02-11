/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:30:32 by tali              #+#    #+#             */
/*   Updated: 2024/02/11 04:30:35 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <bsd/string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(unsigned char c);
int		ft_putstr(char *s);
int		ft_printadr(void *ptr);
void	ft_printadr2(uintptr_t ptr);
int		ft_printhexmaj(unsigned int nb, int i2);
int		ft_printhex(unsigned int nb, int i2);
int		ft_putunbr(unsigned int nb, int i2);
int		ft_putinbr(int nb, int i2);

#endif
