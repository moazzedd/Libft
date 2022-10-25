/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:38:54 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/21 17:15:09 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 1;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (len == 0 && source == NULL)
		return (NULL);
	if (destination == NULL && src == NULL)
		return (NULL);
	if (source < destination)
	{
		while (i <= len)
		{
			destination[len - i] = source[len - i];
			i++;
		}
	}
	else
		ft_memcpy(destination, source, len);
	return (destination);
}
