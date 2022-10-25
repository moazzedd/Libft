/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:47:15 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/22 00:17:21 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*destination;
	unsigned char	*source;

	if (dst == src)
		return (dst);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	counter = 0;
	while (counter < n)
	{
		destination[counter] = source[counter];
		counter++;
	}
	return (dst);
}
