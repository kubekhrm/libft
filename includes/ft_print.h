/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 19:57:42 by cfeijoo           #+#    #+#             */
/*   Updated: 2014/02/17 19:58:16 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

void	ft_putchar(char c);
void 	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbrb(long int n, unsigned int base);
void	ft_putlnbr(long int n);

#endif
