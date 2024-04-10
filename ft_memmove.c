/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 07:49:14 by etienne           #+#    #+#             */
/*   Updated: 2024/04/10 10:52:51 by etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}
