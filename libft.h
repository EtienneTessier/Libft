/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:43:50 by etienne           #+#    #+#             */
/*   Updated: 2024/03/22 08:05:08 by etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

int	ft_strlen(char *str);

void    *ft_memset(void *ptr, int x, size_t n);

void    ft_bzero(void *ptr, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);
#endif

