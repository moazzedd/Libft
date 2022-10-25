/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:41:0 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/08 17:28:27 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destination_lenght;

	if (dst == NULL)
		destination_lenght = 0;
	else
		destination_lenght = ft_strlen((const char *)dst);
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= (destination_lenght) && ft_strlen(src) != 0)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i < dstsize - destination_lenght - 1)
	{
		dst[i + destination_lenght] = src[i];
		i++;
	}
	dst[i + destination_lenght] = '\0';
	return (destination_lenght + ft_strlen(src));
}
